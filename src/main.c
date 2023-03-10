#include <math.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <xtensa/config/core-matmap.h>
#include <xtensa/config/core.h>
#include <xtensa/core-macros.h>
#include <xtensa/hal.h>
#include <xtensa/tie/xt_externalregisters.h>
#include <xtensa/xtruntime.h>
#include <xtensa_api.h>
#include <xtutil.h>

#include "FreeRTOS.h"
#include "platform.h"
#include "task.h"

extern int linpack_main(void);
extern int dhry_main(int t);
extern void coremark_main(void);

#include "fft.h"

#define FFT_NUM 256
static fft_ctrl_t *fft_ctrl = NULL;
static float real_in[FFT_NUM];
static float real_out[FFT_NUM];
static float image_out[FFT_NUM];

void vTaskLed1(void *pvParameters) {
  /* 任务都是一个无限，不能返回 */
  (void)pvParameters;

  fft_ctrl = fft_ctrl_create(FFT_NUM);

  if (fft_ctrl == NULL) {
    xt_printf("fft ctrl create failure\n");
  }
  for (int i = 0; i < FFT_NUM; i++) {
    real_in[i] = 1.0;
  }
  TickType_t st = xTaskGetTickCount();
  fft_ctrl_do(fft_ctrl, real_in, real_out, image_out);

  TickType_t ed = xTaskGetTickCount();

  xt_printf("fft %d used %d ms\n", FFT_NUM, ed - st);
  fft_ctrl_destory(fft_ctrl);

  dsp_msgbox_init(NULL);
  vTaskDelay(500);
  dhry_main(10000000);
  linpack_main();
  coremark_main();
  uint32_t sdata = 0;
  while (1) {
    // xt_printf("task led run on task\n");
    LED_TOG;
    sdata++;
    vTaskDelay(500);
  }
}

static const char *dsp = "mini5 dsp start...";

extern void dsp_interrupt_init(void);
int main(void) {
  printf("dsp %s %f\n", dsp, 0.123);
  xTaskHandle xHandleTaskLED1;
  xTaskCreate(vTaskLed1,   /* 任务函数名 */
              "Task Led1", /* 任务名，字符串形式，方便调试 */
              4096,        /* 栈大小，单位为字，即4个字节 */
              NULL,        /* 任务形参 */
              1,           /* 优先级，数值越大，优先级越高 */
              &xHandleTaskLED1); /* 任务句柄 */
  printf("vTaskStartScheduler\n");
  vTaskStartScheduler();

  printf("vTaskStartScheduler FAILED!\n");
  return 1;
}
