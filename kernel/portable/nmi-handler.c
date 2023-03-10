#include <xtensa/config/core.h>
#include <xtensa/hal.h>



void __attribute__((weak)) NMI_Handler(void)
{
	//xthal_set_intclear(1<<XCHAL_NMILEVEL);
}
