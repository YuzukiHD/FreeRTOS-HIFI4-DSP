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

void vTaskMain(void *pvParameters) {
  (void)pvParameters;
  dsp_msgbox_init(NULL);
  vTaskDelay(500);
  dhry_main(10000000);
  linpack_main();
  coremark_main();
  uint32_t sdata = 0;
  while (1) {
    xt_printf("task led run on task\n");
    LED_TOG;
    sdata++;
    vTaskDelay(500);
  }
}

static const char *dsp = "mini5 dsp start...";

int main(void) {
  printf("dsp %s %f\n", dsp, 0.123);

  xTaskHandle xHandleTaskMain;
  
  xTaskCreate(vTaskMain,   /* 任务函数名 */
              "Task Main", /* 任务名，字符串形式，方便调试 */
              4096,        /* 栈大小，单位为字，即4个字节 */
              NULL,        /* 任务形参 */
              1,           /* 优先级，数值越大，优先级越高 */
              &xHandleTaskMain); /* 任务句柄 */
  printf("vTaskStartScheduler\n");
  vTaskStartScheduler();

  printf("vTaskStartScheduler FAILED!\n");
  return 1;
}
