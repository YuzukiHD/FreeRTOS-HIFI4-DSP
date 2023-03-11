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

typedef void (*msgbox_rxcb)(uint32_t, uint32_t);

static int sunxi_msgbox_interrupt(int dummy, void *args) {
  (void)dummy;
  uint32_t dat;
  msgbox_rxcb rcb = (msgbox_rxcb)args;
  for (int i = 0; i < SUNXI_MSGBOX_MAX_CHANNEL; i++) {
    if (SUNXI_MSGBOX_RD_IRQ_IS_PENDING(i)) {
      while (readl(SUNXI_MSGBOX_DSP_MSG_STATUS_REG(i))) {
        dat = readl(SUNXI_MSGBOX_DSP_MSG_REG(i));
        { printf("dsp recv %08x\n", dat); }
      }
      SUNXI_MSGBOX_RD_IRQ_CLR_PENDING(i);
    }
  }
  return 0;
}

void dsp_msgbox_init(void (*rxcb)(uint32_t, uint32_t)) {
  xt_set_interrupt_handler(MSGBOX_IRQ, (xt_handler)sunxi_msgbox_interrupt,
                           (void *)rxcb);
  xt_ints_on(1 << MSGBOX_IRQ);
  SUNXI_MSGBOX_RD_IRQ_ENABLE(MSGBOX_CHANNLE);
}

static void msgbox_channel_send_data(uint32_t ch, uint32_t data) {
  while (readl(SUNXI_MSGBOX_ARM_MSG_STATUS_REG(ch)) == SUNXI_MSGBOX_MAX_QUEUE)
    ;
  writel(SUNXI_MSGBOX_ARM_MSG_REG(ch), data);
}

void dsp_msgbox_channel_send(uint32_t ch, uint8_t *bf, uint32_t len) {
  uint32_t data = 0, i;
  for (i = 0; i < len; i++) {

    if (!(i % 4))
      data = 0;

    data |= *bf++ << ((i % 4) << 3);

    if ((i % 4) == 3 || i == len - 1) {
      msgbox_channel_send_data(ch, data);
    }
  }
}
