#ifndef _FFT_H
#define _FFT_H
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct fft_ctrl fft_ctrl_t;

extern fft_ctrl_t *fft_ctrl_create(int num_to_do);

extern int fft_ctrl_set_cutoff(fft_ctrl_t *p_ctor, int from, int to);
/*if mix fft or dft used, from to parameter can used to reduce calcaute */
extern int fft_ctrl_do(fft_ctrl_t *p_ctor, float *real_in, float *real_out,
                       float *imag_out);

extern int ifft_ctrl_do(fft_ctrl_t *p_ctor, float *real_in, float *imag_in,
                        float *real_out, float *imag_out);
extern int fft_ctrl_destory(fft_ctrl_t *p_ctor);

/*interpolation helper function*/

extern int lagrange_interpolation_order1(float fs_input, float *input,
                                         int input_sz, float fs_output,
                                         float *output, int output_sz);
extern int lagrange_interpolation_order2(float fs_input, float *input,
                                         int input_sz, float fs_output,
                                         float *output, int output_sz);
extern int lagrange_interpolation_order3(float fs_input, float *input,
                                         int input_sz, float fs_output,
                                         float *output, int output_sz);
#endif
