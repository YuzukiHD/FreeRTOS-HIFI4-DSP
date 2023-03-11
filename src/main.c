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
    printf("task led run on task\n");
    LED_TOG;
    sdata++;
    vTaskDelay(500);
  }
}

int main(void) {
  xTaskHandle xHandleTaskMain;

  xTaskCreate(vTaskMain, "Task Main", 4096, NULL, 1, &xHandleTaskMain);
  printf("vTaskStartScheduler\n");
  vTaskStartScheduler();

  printf("vTaskStartScheduler FAILED!\n");
  return 1;
}
