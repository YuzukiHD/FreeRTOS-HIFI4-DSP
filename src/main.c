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

#include "FreeRTOS.h"
#include "platform.h"
#include "task.h"

/*
 *  External function prototypes
 */
extern int linpack_main(void);
extern int dhry_main(int t);
extern void coremark_main(void);

/*
 *  Main task function
 */
void vTaskMain(void *pvParameters) {
    (void) pvParameters;
    dsp_msgbox_init(NULL);
    vTaskDelay(500);
    dhry_main(10000000);
    linpack_main();
    coremark_main();
    uint32_t sdata = 0;
    while (1) {
        printf("task led run on task\n");
        sdata++;
        vTaskDelay(500);
    }
}

/*
 *  Function to print banner
 */
void print_banner(void) {
    printf("\n\n");
    printf(" _____             _____ _____ _____ _____    _____ _____ _____ _____ ___ \n");
    printf("|   __|___ ___ ___| __  |_   _|     |   __|  |  |  |     |   __|     | | |\n");
    printf("|   __|  _| -_| -_|    -| | | |  |  |__   |  |     |-   -|   __|-   -|_  |\n");
    printf("|__|  |_| |___|___|__|__| |_| |_____|_____|  |__|__|_____|__|  |_____| |_|\n");
    printf("==========================================================================\n");
    printf(" FreeRTOS for HIFI4 DSP v0.1.1, Build on xtensa-hifi4-elf-gcc             \n");
    printf("==========================================================================\n");
}

/*
 *  Main function
 */
int main(void) {
    xTaskHandle xHandleTaskMain;

    print_banner();

    xTaskCreate(vTaskMain, "Task Main", 4096, NULL, 1, &xHandleTaskMain);
    printf("vTaskStartScheduler\n");
    vTaskStartScheduler();

    printf("vTaskStartScheduler FAILED!\n");
    return 1;
}
