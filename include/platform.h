#ifndef __PLATFROM_H
#define __PLATFROM_H

#define inpw(port)            (*((volatile unsigned int *)(port)))
#define outpw(port,value)     *((volatile unsigned int *)(port)) = value

#define  SUNXI_UART0_BA    0x02500000

#define  UART_THR       0
#define  UART_RHR       0
#define  UART_DLL       0
#define  UART_DLH       4
#define  UART_IER       4
#define  UART_IIR       8
#define  UART_FCR       8
#define  UART_LCR       0xc
#define  UART_MCR       0x10
#define  UART_LSR       0x14
#define  UART_MSR       0x18
#define  UART_USR       0x7C


#define  LED_TOG  do{\
	if(inpw(0x020000a0)&(1<<22)){\
        outpw(0x020000a0,inpw(0x020000a0)&(~(1<<22)));\
	}else{\
        outpw(0x020000a0,inpw(0x020000a0)|((1<<22)));\
	}\
}while(0)

#define SUNXI_MSGBOX_ARM_BASE 0x03003000
#define SUNXI_MSGBOX_DSP_BASE 0x01701000

/*
two msgbox
msgbox 0  dsp->cpu  cpu read
msgbox 1  cpu->dsp  cpu write

*/


#define SUNXI_MSGBOX_MAX_CHANNEL   4
#define SUNXI_MSGBOX_MAX_QUEUE 8

#define SUNXI_MSGBOX_RD_IRQ_ENABLE_REG    (SUNXI_MSGBOX_DSP_BASE+ 0x20 + (0)*0x100)
#define SUNXI_MSGBOX_WR_IRQ_ENABLE_REG    (SUNXI_MSGBOX_DSP_BASE+ 0x30 + (0)*0x100)

#define SUNXI_MSGBOX_RD_IRQ_STATUS_REG    (SUNXI_MSGBOX_DSP_BASE+ 0x24 + (0)*0x100)
#define SUNXI_MSGBOX_WR_IRQ_STATUS_REG    (SUNXI_MSGBOX_DSP_BASE+ 0x34 + (0)*0x100)

#define SUNXI_MSGBOX_RD_IRQ_ENABLE(ch)   outpw(SUNXI_MSGBOX_RD_IRQ_ENABLE_REG,inpw(SUNXI_MSGBOX_RD_IRQ_ENABLE_REG)|(1<<(2*(ch))))
#define SUNXI_MSGBOX_RD_IRQ_DISABLE(ch)  outpw(SUNXI_MSGBOX_RD_IRQ_ENABLE_REG,inpw(SUNXI_MSGBOX_RD_IRQ_ENABLE_REG)&(~(1<<(2*(ch)))))


#define SUNXI_MSGBOX_RD_IRQ_IS_PENDING(ch)  (inpw(SUNXI_MSGBOX_RD_IRQ_STATUS_REG)&(1<<(2*(ch))))
#define SUNXI_MSGBOX_RD_IRQ_CLR_PENDING(ch) outpw(SUNXI_MSGBOX_RD_IRQ_STATUS_REG,(1<<(2*(ch))))




#define SUNXI_MSGBOX_ARM_MSG_STATUS_REG(ch)    (SUNXI_MSGBOX_ARM_BASE+ 0x60 + (0)*0x100 +(ch)*0x4)
#define SUNXI_MSGBOX_DSP_MSG_STATUS_REG(ch)    (SUNXI_MSGBOX_DSP_BASE+ 0x60 + (0)*0x100 +(ch)*0x4)

#define SUNXI_MSGBOX_ARM_MSG_REG(ch)    (SUNXI_MSGBOX_ARM_BASE+ 0x70 + (0)*0x100 +(ch)*0x4)
#define SUNXI_MSGBOX_DSP_MSG_REG(ch)    (SUNXI_MSGBOX_DSP_BASE+ 0x70 + (0)*0x100 +(ch)*0x4)

#define TIMER1_IRQ  1
#define MSGBOX_IRQ  3

#define MSGBOX_CHANNLE  3


extern void dsp_msgbox_init(void (*rxcb)(uint32_t,uint32_t));
extern void dsp_msgbox_channel_send(uint32_t ch, uint8_t *bf,
			    uint32_t len);

#endif
