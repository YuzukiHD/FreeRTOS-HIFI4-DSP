#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef unsigned char u8;
typedef unsigned int u32;

static int file_read_bin_data(char *file, u8 *buf, int size) {
  FILE *fp;

  if ((fp = fopen(file, "rb")) == NULL) {
    printf("Can not open the file: %s \n", file);
    return -1;
  }

  if(fread(buf, sizeof(u8), size, fp) == 1){
    printf("Can not read the file: %s \n", file);
  }

  fclose(fp);

  return 0;
}

static u32 file_get_bin_size(char *file) {
  u32 size = 0;
  FILE *fp = fopen(file, "rb");
  if (fp) {
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    fclose(fp);
  }
  return size;
}

int file_out_handle(char *out_file, u8 *buf, u32 size) {
  FILE *fp;
  int i, j, k, n;
  int fd;
  char pbuf[100] = {0};
  char mfgimage[4096 * 2];

  if ((fp = fopen(out_file, "wa+")) == NULL) {
    printf("\nCan not open the path: %s \n", out_file);
    return -1;
  }
  k = 0;

  sprintf(pbuf, "static uint32_t %s_size = %d;\n", out_file, size);
  fwrite(pbuf, strlen(pbuf), 1, fp);

  fwrite("static uint8_t ", strlen("static uint8_t "), 1, fp);
  fwrite(out_file, strlen(out_file), 1, fp);
  
  sprintf(pbuf, "[%d] = { \n\t", size);
  fwrite(pbuf, strlen(pbuf), 1, fp);

  for (i = 0; i < size; i++) {
    k++;
    sprintf(pbuf, "0x%02x", buf[i]);
    fwrite(pbuf, strlen(pbuf), 1, fp);

    if (k != 16)
      fwrite(", ", strlen(", "), 1, fp);
    else
      fwrite(",", strlen(","), 1, fp);

    if (k == 16) {
      k = 0;
      fwrite("\n\t", strlen("\n\t"), 1, fp);
    }
  }

  fwrite("\n", strlen("\n"), 1, fp);
  fwrite("};", strlen("};"), 1, fp);

  fclose(fp);

  return 0;
}

int main(int argc, const char *argv[]) {
  u8 *buf = NULL;
  u32 size;
  char *src_bin = NULL;
  char *dst_file = NULL;

  if (argc != 3) {
    printf("Error param input !\r\n");
    printf("Usage: %s src_bin out_file\e\n", argv[0]);
    exit(1);
  }

  src_bin = (char *)argv[1];
  dst_file = (char *)argv[2];
  size = file_get_bin_size(src_bin);

  buf = (u8 *)malloc(sizeof(u8) * size);
  if (buf) {
    file_read_bin_data(src_bin, buf, size);
    file_out_handle(dst_file, buf, size);
    free(buf);
  }

  return 0;
}