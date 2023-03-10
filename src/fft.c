#include "fft.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


#ifndef pi
#define pi 3.1415926535897935354626
#endif

struct fft_ctrl {
  float *fft_x_scale;
  float *fft_y_scale;
  float *ifft_x_scale;
  float *ifft_y_scale;
  float *dft_x_scale;
  float *dft_y_scale;
  float **mid_in_real;
  float **mid_out_real;
  float **mid_out_image;
  int sep_num_pow2;
  int sep_num_nopow2;
  int num_to_do;
  int from;
  int to;
};
static int is_pow_of_two(int x) {
  if (x < 2)
    return 0;
  if (x & (x - 1))
    return 0;
  return 1;
}

static unsigned int number_of_bits_need(unsigned PowerOfTwo) {
  unsigned int i;
  for (i = 0;; i++) {
    if (PowerOfTwo & (1 << i))
      return i;
  }
}

static unsigned int reverse_bits(unsigned int index, unsigned int NumBits) {
  unsigned int i, rev;
  for (i = rev = 0; i < NumBits; i++) {
    rev = (rev << 1) | (index & 1);
    index >>= 1;
  }
  return rev;
}

static void sep_number_get(int num, int *powof2, int *nopowof2) {
  int div = 0;
  while ((num % 2) == 0) {
    div += 1;
    num /= 2;
  }
  *powof2 = 1 << div;
  *nopowof2 = num;
}

fft_ctrl_t *fft_ctrl_create(int num_to_do) {
  fft_ctrl_t *p_ctor;
  unsigned int num;
  int BlockSize, i;
  double delta_angle;
  if (is_pow_of_two(num_to_do) == 0) {
    printf("input num point is not pow of 2,will use mix fft or raw dft method "
           "!\n");
  }
  p_ctor = (fft_ctrl_t *)calloc(1, sizeof(fft_ctrl_t));
  if (p_ctor == NULL)
    return NULL;

  p_ctor->num_to_do = num_to_do;
  p_ctor->from = 0;
  p_ctor->to = num_to_do;
  sep_number_get(num_to_do, &p_ctor->sep_num_pow2, &p_ctor->sep_num_nopow2);
  /*
      sep_num_pow2 == num_to_do  mean can only use fft do it
      sep_num_pow2 == 1          mean can only use dft do it
              sep_num_pow2 > 1 && sep_num_pow2 != num_to_do  mean can use mix
     fft do it
      */
  /*mean need dft help*/
  if (p_ctor->sep_num_pow2 != num_to_do) {
    p_ctor->dft_x_scale = (float *)calloc(1, sizeof(float) * p_ctor->num_to_do);
    if (p_ctor->dft_x_scale == NULL)
      goto error_malloc;
    p_ctor->dft_y_scale = (float *)calloc(1, sizeof(float) * p_ctor->num_to_do);
    if (p_ctor->dft_y_scale == NULL)
      goto error_malloc;
    /*raw dft*/
    if (num_to_do == p_ctor->sep_num_nopow2) {
      for (i = 0; i < p_ctor->num_to_do; i++) {
        delta_angle = -2.0 * pi * i / (double)p_ctor->num_to_do;
        p_ctor->dft_y_scale[i] = sin(delta_angle);
        p_ctor->dft_x_scale[i] = cos(delta_angle);
      }
    } else {
      /*mix fft*/
      for (i = 0; i < p_ctor->num_to_do; i++) {
        delta_angle = 2.0 * pi * i / (double)p_ctor->num_to_do;
        p_ctor->dft_y_scale[i] = sin(delta_angle);
        p_ctor->dft_x_scale[i] = cos(delta_angle);
      }
    }
    /*mean need to need seperate input to group and used mix fft, sep_num_nopow2
     * dim of sep_num_pow2*/
    if (p_ctor->sep_num_pow2 != 1) {
      p_ctor->mid_in_real =
          (float **)calloc(1, sizeof(float *) * p_ctor->sep_num_nopow2);
      if (p_ctor->mid_in_real == NULL)
        goto error_malloc;

      p_ctor->mid_out_real =
          (float **)calloc(1, sizeof(float *) * p_ctor->sep_num_nopow2);
      if (p_ctor->mid_out_real == NULL)
        goto error_malloc;

      p_ctor->mid_out_image =
          (float **)calloc(1, sizeof(float *) * p_ctor->sep_num_nopow2);
      if (p_ctor->mid_out_image == NULL)
        goto error_malloc;
      for (i = 0; i < p_ctor->sep_num_nopow2; i++) {
        p_ctor->mid_in_real[i] =
            (float *)calloc(1, sizeof(float) * p_ctor->sep_num_pow2);
        if (p_ctor->mid_in_real[i] == NULL)
          goto error_malloc;
        p_ctor->mid_out_real[i] =
            (float *)calloc(1, sizeof(float) * p_ctor->sep_num_pow2);
        if (p_ctor->mid_out_real[i] == NULL)
          goto error_malloc;
        p_ctor->mid_out_image[i] =
            (float *)calloc(1, sizeof(float) * p_ctor->sep_num_pow2);
        if (p_ctor->mid_out_image[i] == NULL)
          goto error_malloc;
      }
    }
  }
  /*mean need fft help*/
  if (p_ctor->sep_num_pow2 > 1) {
    num = number_of_bits_need(p_ctor->sep_num_pow2) * 2;
    p_ctor->fft_x_scale = (float *)calloc(1, sizeof(float) * num);
    if (p_ctor->fft_x_scale == NULL)
      goto error_malloc;
    p_ctor->fft_y_scale = (float *)calloc(1, sizeof(float) * num);
    if (p_ctor->fft_y_scale == NULL)
      goto error_malloc;
    p_ctor->ifft_x_scale = (float *)calloc(1, sizeof(float) * num);
    if (p_ctor->ifft_x_scale == NULL)
      goto error_malloc;
    p_ctor->ifft_y_scale = (float *)calloc(1, sizeof(float) * num);
    if (p_ctor->ifft_y_scale == NULL)
      goto error_malloc;
    for (BlockSize = 2, i = 0; BlockSize <= p_ctor->sep_num_pow2;
         BlockSize <<= 1, i++) {
      delta_angle = 2.0 * pi / (double)BlockSize;
      p_ctor->fft_y_scale[2 * i + 1] = sin(-2 * delta_angle);
      p_ctor->fft_y_scale[2 * i] = sin(-delta_angle);
      p_ctor->fft_x_scale[2 * i + 1] = cos(-2 * delta_angle);
      p_ctor->fft_x_scale[2 * i] = cos(-delta_angle);

      p_ctor->ifft_y_scale[2 * i + 1] = sin(2 * delta_angle);
      p_ctor->ifft_y_scale[2 * i] = sin(delta_angle);
      p_ctor->ifft_x_scale[2 * i + 1] = cos(2 * delta_angle);
      p_ctor->ifft_x_scale[2 * i] = cos(delta_angle);
    }
  }
  return p_ctor;

error_malloc:
  fft_ctrl_destory(p_ctor);
  return NULL;
}

/*besure when destory ,p_ctor should not be in used*/
int fft_ctrl_destory(fft_ctrl_t *p_ctor) {
  int i;
  if (p_ctor == NULL)
    return -1;

  if (p_ctor->fft_x_scale)
    free(p_ctor->fft_x_scale);
  if (p_ctor->fft_y_scale)
    free(p_ctor->fft_y_scale);
  if (p_ctor->ifft_x_scale)
    free(p_ctor->ifft_x_scale);
  if (p_ctor->ifft_y_scale)
    free(p_ctor->ifft_y_scale);

  if (p_ctor->dft_x_scale)
    free(p_ctor->dft_x_scale);
  if (p_ctor->dft_y_scale)
    free(p_ctor->dft_y_scale);

  if (p_ctor->mid_in_real) {
    for (i = 0; i < p_ctor->sep_num_nopow2; i++) {
      if (p_ctor->mid_in_real[i])
        free(p_ctor->mid_in_real[i]);
    }
    free(p_ctor->mid_in_real);
  }
  if (p_ctor->mid_out_real) {
    for (i = 0; i < p_ctor->sep_num_nopow2; i++) {
      if (p_ctor->mid_out_real[i])
        free(p_ctor->mid_out_real[i]);
    }
    free(p_ctor->mid_out_real);
  }
  if (p_ctor->mid_out_image) {
    for (i = 0; i < p_ctor->sep_num_nopow2; i++) {
      if (p_ctor->mid_out_image[i])
        free(p_ctor->mid_out_image[i]);
    }
    free(p_ctor->mid_out_image);
  }
  free(p_ctor);
  return 0;
}

static int raw_dft_math_do_one(fft_ctrl_t *p_ctor, float *real_in,
                               float *imag_in, float *real_out, float *imag_out,
                               int idx) {
  int i;
  int round;
  if (p_ctor == NULL)
    return -1;
  if ((real_in == NULL) || (real_out == NULL) || (imag_out == NULL)) {
    printf("dft need all input are not null except image in !\n");
    return -1;
  }

  real_out[0] = 0;
  imag_out[0] = 0;
  /*seperate image in null to speed increase*/
  if (imag_in == NULL) {
    for (i = 0; i < p_ctor->sep_num_nopow2; i++) {
      round = (i * idx) % p_ctor->sep_num_nopow2;
      real_out[0] += (real_in[i] * p_ctor->dft_x_scale[round]);
      imag_out[0] += (real_in[i] * p_ctor->dft_y_scale[round]);
    }
    return 0;
  }
  for (i = 0; i < p_ctor->sep_num_nopow2; i++) {
    round = (i * idx) % p_ctor->sep_num_nopow2;
    real_out[0] += (real_in[i] * p_ctor->dft_x_scale[round] +
                    imag_in[i] * p_ctor->dft_y_scale[round]);
    imag_out[0] += (real_in[i] * p_ctor->dft_y_scale[round] +
                    imag_in[i] * p_ctor->dft_x_scale[round]);
  }
  return 0;
}

static int raw_ifft_ctrl_do(fft_ctrl_t *p_ctor, float *real_in, float *imag_in,
                            float *real_out, float *imag_out) {
  unsigned long NumBits; /* Number of bits needed to store indices */
  int i, j, k, n, l;
  int BlockSize, BlockEnd;
  float tr, ti; /* temp real, temp imaginary */
  float ar[3], ai[3];
  float sm2;
  float sm1;
  float cm2;
  float cm1;
  float w;
  if (p_ctor == NULL)
    return -1;
  if ((real_in == NULL) || (imag_in == NULL) || (real_out == NULL) ||
      (imag_out == NULL)) {
    printf("ifft need all input are not null  !\n");
    return -1;
  }
  NumBits = number_of_bits_need(p_ctor->sep_num_pow2);
  for (i = 0; i < p_ctor->sep_num_pow2; i++) {
    j = reverse_bits(i, NumBits);
    real_out[j] = real_in[i];
    imag_out[j] = imag_in[i];
  }
  BlockEnd = 1;
  for (BlockSize = 2, l = 0; BlockSize <= p_ctor->sep_num_pow2;
       BlockSize <<= 1, l++) {
    sm2 = p_ctor->ifft_y_scale[2 * l + 1];
    sm1 = p_ctor->ifft_y_scale[2 * l];
    cm2 = p_ctor->ifft_x_scale[2 * l + 1];
    cm1 = p_ctor->ifft_x_scale[2 * l];
    w = 2 * cm1;

    for (i = 0; i < p_ctor->sep_num_pow2; i += BlockSize) {
      ar[2] = cm2;
      ar[1] = cm1;
      ai[2] = sm2;
      ai[1] = sm1;
      for (j = i, n = 0; n < BlockEnd; j++, n++) {
        ar[0] = w * ar[1] - ar[2];
        ar[2] = ar[1];
        ar[1] = ar[0];
        ai[0] = w * ai[1] - ai[2];
        ai[2] = ai[1];
        ai[1] = ai[0];
        k = j + BlockEnd;
        tr = ar[0] * real_out[k] - ai[0] * imag_out[k];
        ti = ar[0] * imag_out[k] + ai[0] * real_out[k];
        real_out[k] = real_out[j] - tr;
        imag_out[k] = imag_out[j] - ti;
        real_out[j] += tr;
        imag_out[j] += ti;
      }
    }
    BlockEnd = BlockSize;
  }
  for (i = 0; i < p_ctor->sep_num_pow2; i++) {
    real_out[i] /= p_ctor->sep_num_pow2;
  }
  return 0;
}

int ifft_ctrl_do(fft_ctrl_t *p_ctor, float *real_in, float *imag_in,
                 float *real_out, float *imag_out) {
  if (p_ctor == NULL)
    return -1;
  if (real_out == NULL)
    return -1;
  if (imag_out == NULL)
    return -1;
  if (real_in == NULL)
    return -1;
  if (imag_in == NULL)
    return -1;

  /*raw fft do it*/
  if (p_ctor->sep_num_pow2 == p_ctor->num_to_do)
    return raw_ifft_ctrl_do(p_ctor, real_in, imag_in, real_out, imag_out);

  printf("not impl not pow of 2 ifft!\n");
  return -1;
}

static int raw_fft_math_do(fft_ctrl_t *p_ctor, float *real_in, float *imag_in,
                           float *real_out, float *imag_out) {
  unsigned long NumBits; /* Number of bits needed to store indices */
  int i, j, k, n, l;
  int BlockSize, BlockEnd;
  float tr, ti; /* temp real, temp imaginary */
  float ar[3], ai[3];
  float sm2;
  float sm1;
  float cm2;
  float cm1;
  float w;
  if (p_ctor == NULL)
    return -1;
  if ((real_in == NULL) || (real_out == NULL) || (imag_out == NULL)) {
    printf("fft need all input are not null except image in !\n");
    return -1;
  }
  NumBits = number_of_bits_need(p_ctor->sep_num_pow2);
  /*seperate imag null input process for increase speed*/
  if (imag_in == NULL) {
    for (i = 0; i < p_ctor->sep_num_pow2; i++) {
      j = reverse_bits(i, NumBits);
      real_out[j] = real_in[i];
      imag_out[j] = 0.0;
    }
  } else {
    for (i = 0; i < p_ctor->sep_num_pow2; i++) {
      j = reverse_bits(i, NumBits);
      real_out[j] = real_in[i];
      imag_out[j] = imag_in[i];
    }
  }
  BlockEnd = 1;
  for (BlockSize = 2, l = 0; BlockSize <= p_ctor->sep_num_pow2;
       BlockSize <<= 1, l++) {
    sm2 = p_ctor->fft_y_scale[2 * l + 1];
    sm1 = p_ctor->fft_y_scale[2 * l];
    cm2 = p_ctor->fft_x_scale[2 * l + 1];
    cm1 = p_ctor->fft_x_scale[2 * l];
    w = 2 * cm1;
    for (i = 0; i < p_ctor->sep_num_pow2; i += BlockSize) {
      ar[2] = cm2;
      ar[1] = cm1;
      ai[2] = sm2;
      ai[1] = sm1;
      for (j = i, n = 0; n < BlockEnd; j++, n++) {
        ar[0] = w * ar[1] - ar[2];
        ar[2] = ar[1];
        ar[1] = ar[0];
        ai[0] = w * ai[1] - ai[2];
        ai[2] = ai[1];
        ai[1] = ai[0];
        k = j + BlockEnd;
        tr = ar[0] * real_out[k] - ai[0] * imag_out[k];
        ti = ar[0] * imag_out[k] + ai[0] * real_out[k];
        real_out[k] = real_out[j] - tr;
        imag_out[k] = imag_out[j] - ti;
        real_out[j] += tr;
        imag_out[j] += ti;
      }
    }
    BlockEnd = BlockSize;
  }
  return 0;
}

int fft_ctrl_do(fft_ctrl_t *p_ctor, float *real_in, float *real_out,
                float *imag_out) {
  int i, j;
  int ret = 0;
  if (p_ctor == NULL)
    return -1;
  if (real_out == NULL)
    return -1;
  if (imag_out == NULL)
    return -1;
  if (real_in == NULL)
    return -1;
  /*raw fft do it*/
  if (p_ctor->sep_num_pow2 == p_ctor->num_to_do)
    return raw_fft_math_do(p_ctor, real_in, 0, real_out, imag_out);

  /*dft or mix fft need from to parameter*/
  if (p_ctor->from > p_ctor->to) {
    printf("from great than to, we don't know how to put output buffer!\n");
    return -1;
  }
  if (p_ctor->to > p_ctor->num_to_do) {
    printf("only support to %d\n", p_ctor->num_to_do);
    return -1;
  }
  /*raw dft do it*/
  if (p_ctor->sep_num_pow2 == 1) {

    for (i = p_ctor->from; i < p_ctor->to; i++) {
      ret = raw_dft_math_do_one(p_ctor, real_in, 0, &real_out[i - p_ctor->from],
                                &imag_out[i - p_ctor->from], i);
      if (ret)
        break;
    }
    return ret;
  }
  /*mix fft do it*/

  // printf("mix %d x %d\n",p_ctor->sep_num_pow2,p_ctor-> sep_num_nopow2);
  /*step one :seperate input buf to sep_num_nopow2 group*/
  for (i = 0; i < p_ctor->sep_num_nopow2; i++) {
    for (j = 0; j < p_ctor->sep_num_pow2; j++) {
      p_ctor->mid_in_real[i][j] = real_in[j * p_ctor->sep_num_nopow2 + i];
      // printf("%d %d\n",i,j*p_ctor->sep_num_nopow2+i);
    }
    // printf("sep done,begin fft!\n");
    /*step two : do fft */
    ret = raw_fft_math_do(p_ctor, p_ctor->mid_in_real[i], 0,
                          p_ctor->mid_out_real[i], p_ctor->mid_out_image[i]);
    if (ret) {
      printf("do group fft failure!\n");
      return -1;
    }
    /*for(j = 0; j < p_ctor->sep_num_pow2;j++)
         {
  printf("%d %f\n",j,
                 sqrt(2)*sqrt(p_ctor->mid_out_real[i][j]*p_ctor->mid_out_real[i][j]+
                  p_ctor->mid_out_image[i][j]*p_ctor->mid_out_image[i][j])/p_ctor->sep_num_pow2);
         }*/
  }
  /*step three : do dft */
  for (i = p_ctor->from; i < p_ctor->to; i++) {
    real_out[i - p_ctor->from] = 0;
    imag_out[i - p_ctor->from] = 0;

    int round, round1;
    for (j = 0; j < p_ctor->sep_num_nopow2; j++) {

      round = ((i)*j) % p_ctor->num_to_do;
      round1 = (i - p_ctor->from) % p_ctor->sep_num_pow2;
#if 0
			float ang1 = i*2*pi*j/p_ctor-> num_to_do;
            real_out[i - p_ctor->from] +=cos(ang1)*p_ctor->mid_out_real[j][round1];
			real_out[i - p_ctor->from] -=sin(ang1)*p_ctor->mid_out_image[j][round1];
            imag_out[i - p_ctor->from] +=cos(ang1)*p_ctor->mid_out_image[j][round1];
			imag_out[i - p_ctor->from] +=sin(ang1)*p_ctor->mid_out_real[j][round1];
#else
      real_out[i - p_ctor->from] +=
          p_ctor->mid_out_real[j][round1] * p_ctor->dft_x_scale[round];
      real_out[i - p_ctor->from] -=
          p_ctor->mid_out_image[j][round1] * p_ctor->dft_y_scale[round];
      imag_out[i - p_ctor->from] +=
          p_ctor->mid_out_real[j][round1] * p_ctor->dft_y_scale[round];
      imag_out[i - p_ctor->from] +=
          p_ctor->mid_out_image[j][round1] * p_ctor->dft_x_scale[round];
#endif
    }
  }
  return ret;
}

int fft_ctrl_set_cutoff(fft_ctrl_t *p_ctor, int from, int to) {
  if (p_ctor == NULL)
    return -1;
  if (from > to)
    return -1;
  if (from >= p_ctor->num_to_do)
    return -1;
  if (to >= p_ctor->num_to_do)
    return -1;
  p_ctor->from = from;
  p_ctor->to = to;
  return 0;
}

/*interpolation helper function*/
//#define  INCLUDE_INTERPOLATION_FILE_DUMP
int lagrange_interpolation_order1(float fs_input, float *input, int input_sz,
                                  float fs_output, float *output,
                                  int output_sz) {
  /*test only fs diferent*/
#ifdef INCLUDE_INTERPOLATION_FILE_DUMP
  FILE *fp;
  fp = fopen("lagrange1.txt", "w");
#endif
  int input_itera = 0;
  int output_itera = 0;
  float delta_t = fs_input / fs_output;
  float x_output = 0;
  int output_max;
  output_max = (int)delta_t * output_sz;
  if (output_max > input_sz) {
    printf("input size is too small for interpolation %d %d!\n", output_max,
           input_sz);
    return -1;
  }
  while (output_itera < (output_sz)) {
    input_itera = (int)x_output;

    if (input_itera > (input_sz - 2))
      input_itera = input_sz - 2;
    /*
f(x) = f(0)*(x-x1)/(0-1) + f(1)(x-x0)/(1-0)

    */
    output[output_itera] =
        -1 * input[input_itera] * (x_output - input_itera - 1) +
        input[input_itera + 1] * (x_output - input_itera);
#ifdef INCLUDE_INTERPOLATION_FILE_DUMP
    fprintf(fp, "%.4f %.4f\n", input[input_itera], output[output_itera]);
#endif
    output_itera++;
    x_output += delta_t;
  }
#ifdef INCLUDE_INTERPOLATION_FILE_DUMP
  fclose(fp);
#endif
  return 0;
}

int lagrange_interpolation_order2(float fs_input, float *input, int input_sz,
                                  float fs_output, float *output,
                                  int output_sz) {
  /*test only fs diferent*/
#ifdef INCLUDE_INTERPOLATION_FILE_DUMP
  FILE *fp;
  fp = fopen("lagrange2.txt", "w");
#endif
  int input_itera = 0;
  int output_itera = 0;
  float delta_t = fs_input / fs_output;
  float x_output = 0;
  int output_max;
  output_max = (int)delta_t * output_sz;
  if (output_max > input_sz) {
    printf("input size is too small for interpolation %d %d!\n", output_max,
           input_sz);
    return -1;
  }
  while (output_itera < (output_sz)) {
    input_itera = (int)x_output;

    if (input_itera > (input_sz - 3))
      input_itera = input_sz - 3;
    /*
f(x) = f(0)*(x-x1)(x-x2)/((0-1)*(0-2)) + f(1)(x-x0)(x-x2)/((1-0)*(1-2))
             +f(2)(x-x0)(x-x1)/((2-1)(2-0))

=>
      f(x) = f(0)*(x-x1)(x-x2)*0.5 -f(1)(x-x0)(x-x2) +f(2)(x-x0)(x-x1)*0.5

    */
    output[output_itera] = 0.5 * (x_output - input_itera - 1) *
                               (x_output - input_itera - 2) *
                               input[input_itera] -
                           input[input_itera + 1] * (x_output - input_itera) *
                               (x_output - input_itera - 2) +
                           input[input_itera + 2] * (x_output - input_itera) *
                               (x_output - input_itera - 1) * 0.5;
#ifdef INCLUDE_INTERPOLATION_FILE_DUMP
    fprintf(fp, "%.4f %.4f\n", input[input_itera], output[output_itera]);
#endif
    output_itera++;
    x_output += delta_t;
  }
#ifdef INCLUDE_INTERPOLATION_FILE_DUMP
  fclose(fp);
#endif
  return 0;
}

int lagrange_interpolation_order3(float fs_input, float *input, int input_sz,
                                  float fs_output, float *output,
                                  int output_sz) {
  /*test only fs diferent*/
#ifdef INCLUDE_INTERPOLATION_FILE_DUMP
  FILE *fp;
  fp = fopen("lagrange3.txt", "w");
#endif
  int output_itera = 0;
  float delta_t = fs_input / fs_output;
  float x_output = 0;
  int x_input;

  int output_max;
  output_max = (int)delta_t * output_sz;
  if (output_max > input_sz) {
    printf("input size is too small for interpolation %d %d!\n", output_max,
           input_sz);
    return -1;
  }
  while (output_itera < (output_sz)) {
    x_input = (int)x_output;

    if (x_input >= (input_sz - 4))
      x_input = input_sz - 4;
    /*
f(x) = f(0)*(x-x1)(x-x2)*(x-x3)/((0-1)*(0-2)*(0-3)) +
             f(1)*(x-x0)(x-x2)*(x-x3)/((1-0)*(1-2)*(0-3)) +
             f(2)*(x-x0)(x-x1)*(x-x3)/((2-1)*(2-0)*(2-3)) +
                     f(3)*(x-x0)(x-x1)*(x-x2)/((3-0)*(3-1)*(3-2))

=>
      f(x) = -f(0)*(x-x1)(x-x2)*(x-x3)/6.0 +
              f(1)*(x-x0)(x-x2)*(x-x3)/6.0 -
                      f(2)*(x-x0)(x-x1)*(x-x3)*0.5 +
      f(3)*(x-x0)(x-x1)*(x-x2)*0.5

    */
    output[output_itera] =
        -1.0 * (x_output - x_input - 1) * (x_output - x_input - 2) *
            (x_output - x_input - 3) * input[x_input] / 6.0 +
        input[x_input + 1] * (x_output - x_input) * (x_output - x_input - 2) *
            (x_output - x_input - 3) / 6.0 +
        input[x_input + 2] * (x_output - x_input) * (x_output - x_input - 1) *
            (x_output - x_input - 3) * 0.5 +
        input[x_input + 3] * (x_output - x_input) * (x_output - x_input - 1) *
            (x_output - x_input - 2) * 0.5;
#ifdef INCLUDE_INTERPOLATION_FILE_DUMP
    fprintf(fp, "%.4f %.4f\n", input[x_input], output[output_itera]);
#endif
    output_itera++;
    x_output += delta_t;
  }
#ifdef INCLUDE_INTERPOLATION_FILE_DUMP
  fclose(fp);
#endif
  return 0;
}
