#include <stdint.h>
#include <xtensa/config/core-matmap.h>
#include <xtensa/config/core.h>
#include <xtensa/core-macros.h>
#include <xtensa/hal.h>
#include <xtensa/tie/xt_externalregisters.h>
#include <xtensa/xtruntime.h>

#include "platform.h"

static void _cache_config(void) {
#if 0
	/* 0x0~0x20000000-1 is non-cacheable */
	xthal_set_region_attribute((void *)0x00020000, 0x28000, XCHAL_CA_BYPASS, 0);
    xthal_set_region_attribute((void *)0x000400000, 0x10000, XCHAL_CA_BYPASS, 0);
	xthal_set_region_attribute((void *)0x000420000, 0x8000, XCHAL_CA_BYPASS, 0);
	xthal_set_region_attribute((void *)0x000440000, 0x8000, XCHAL_CA_BYPASS, 0);
    xthal_set_region_attribute((void *)0x01700000, 0x1000, XCHAL_CA_BYPASS, 0);
	xthal_set_region_attribute((void *)0x02000000, 0x8000000, XCHAL_CA_BYPASS, 0);
    xthal_set_region_attribute((void *)0x10000000, 0x10000000, XCHAL_CA_BYPASS, 0);
	/* 0x20000000~0x40000000-1 is cacheable */
	xthal_set_region_attribute((void *)0x30000000, 0x10000000, XCHAL_CA_WRITEBACK, 0);
	/* set prefetch level */
	xthal_set_cache_prefetch(XTHAL_PREFETCH_BLOCKS(8) |XTHAL_DCACHE_PREFETCH_HIGH | XTHAL_ICACHE_PREFETCH_HIGH |XTHAL_DCACHE_PREFETCH_L1);
#endif

  /* 0x0~0x20000000-1 is non-cacheable */
  xthal_set_region_attribute((void *)0x00000000, 0x20000000, XCHAL_CA_WRITEBACK,
                             0);
  xthal_set_region_attribute((void *)0x00000000, 0x20000000, XCHAL_CA_BYPASS,
                             0);

  /* 0x20000000~0x40000000-1 is cacheable */
  xthal_set_region_attribute((void *)0x20000000, 0x20000000, XCHAL_CA_WRITEBACK,
                             0);

  /* 0x4000000~0x80000000-1 is non-cacheable */
  xthal_set_region_attribute((void *)0x40000000, 0x40000000, XCHAL_CA_WRITEBACK,
                             0);
  xthal_set_region_attribute((void *)0x40000000, 0x40000000, XCHAL_CA_BYPASS,
                             0);

  /* 0x80000000~0xC0000000-1 is non-cacheable */
  xthal_set_region_attribute((void *)0x80000000, 0x40000000, XCHAL_CA_WRITEBACK,
                             0);
  xthal_set_region_attribute((void *)0x80000000, 0x40000000, XCHAL_CA_BYPASS,
                             0);

  /* 0xC0000000~0xFFFFFFFF is  cacheable */
  xthal_set_region_attribute((void *)0xC0000000, 0x40000000, XCHAL_CA_WRITEBACK,
                             0);

  /* set prefetch level */
  xthal_set_cache_prefetch(
      XTHAL_PREFETCH_BLOCKS(8) | XTHAL_DCACHE_PREFETCH_HIGH |
      XTHAL_ICACHE_PREFETCH_HIGH | XTHAL_DCACHE_PREFETCH_L1);
}

void _exit(int no) {
  (void)no;
  while (1)
    ;
}

#define SUNXI_DSP_IRQ_NMI 0
#define SUNXI_DSP_IRQ_DSP_TIMER1 1
#define SUNXI_DSP_IRQ_DSP_TIMER0 2

#define RINTC_IRQ_MASK 0xffff0000

#define SUNXI_R_INTC_PBASE (0x01700800)

#define SUNXI_DSP_IRQ_R_INTC 20

#define SUNXI_RINTC_IRQ_NMI (RINTC_IRQ_MASK | 0) /* not use */
#define SUNXI_RINTC_IRQ_SOURCE_MAX 88            /* FIXME: can be decreased */

struct intc_regs {
  /*offset 0x00 */
  volatile uint32_t vector;
  volatile uint32_t base_addr;
  volatile uint32_t reserved0;
  volatile uint32_t control;

  /*offset 0x10 */
  volatile uint32_t pending;
  volatile uint32_t pending1;
  volatile uint32_t pending2;
  volatile uint32_t reserved1[9];

  /*offset 0x40 */
  volatile uint32_t enable;
  volatile uint32_t enable1;
  volatile uint32_t enable2;
  volatile uint32_t reserved2[1];

  /*offset 0x50 */
  volatile uint32_t mask;
  volatile uint32_t mask1;
  volatile uint32_t mask2;
  volatile uint32_t reserved3[5];

  /*offset 0x70 */
  volatile uint32_t fast_forcing;
  volatile uint32_t reserved4[3];

  /*offset 0x80 */
  volatile uint32_t priority0;
  volatile uint32_t priority1;
  volatile uint32_t reserved5[14];

  /*offset 0xc0 */
  volatile uint32_t group_config0;
  volatile uint32_t group_config1;
  volatile uint32_t group_config2;
  volatile uint32_t group_config3;
};

static volatile struct intc_regs *(pintc_regs) = (volatile struct intc_regs *)
    SUNXI_R_INTC_PBASE;
void board_init(void) {
  _cache_config();
  pintc_regs->enable = 0x0;
  pintc_regs->mask = 0x0;
  pintc_regs->pending = 0xffffffff;

  pintc_regs->enable1 = 0x0;
  pintc_regs->mask1 = 0x0;
  pintc_regs->pending1 = 0xffffffff;

  pintc_regs->enable2 = 0x0;
  pintc_regs->mask2 = 0x0;
  pintc_regs->pending2 = 0xffffffff;
}

int outbyte(char c) {
  while ((inpw(SUNXI_UART0_BA + UART_LSR) & (1 << 5)) == 0)
    ;
  outpw(SUNXI_UART0_BA + UART_THR, c);
  return 0;
}

uint32_t xtbsp_clock_freq_hz(void) { return 600000000; }

uint64_t xbsp_get_ccount(void) {
  static uint64_t cnt = 0;
  static unsigned last_ccount = 0;
  unsigned ccount = XTHAL_GET_CCOUNT();

  if (ccount < last_ccount)
    cnt = cnt + 0xffffffff;
  cnt = cnt + ccount;

  last_ccount = ccount;
  return cnt;
}
