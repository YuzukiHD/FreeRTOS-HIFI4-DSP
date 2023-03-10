CROSS_COMPILE ?= /home/yuzuki/Github/D1-HIFI4/tools/xtensa-hifi4-gcc/bin/xtensa-hifi4-elf-

AS	  := $(CROSS_COMPILE)gcc -x assembler-with-cpp
CC	  := $(CROSS_COMPILE)gcc
CXX	  := $(CROSS_COMPILE)g++
LD	  := $(CROSS_COMPILE)ld
AR	  := $(CROSS_COMPILE)ar
OC	  := $(CROSS_COMPILE)objcopy
OD	  := $(CROSS_COMPILE)objdump
SIZE  := $(CROSS_COMPILE)size
RE    := $(CROSS_COMPILE)readelf
MKDIR := mkdir -p
CP	  := cp -af
RM	  := rm -fr
CD	  := cd
FIND  := find
Q     := @

DEPFLAGS = -MT $@ -MD -MP -MF $(basename $@).d

APP_NAME = dsp
BUILDDIR = ./build
OUTDIR := $(BUILDDIR)/output
APP := $(OUTDIR)/$(APP_NAME).elf

IFLAGS := -I ./include
IFLAGS += -I ./arch
IFLAGS += -I ./src
IFLAGS += -I ./kernel/portable
IFLAGS += -I ./include/freertos
IFLAGS += -I ./include/freertos/private
IFLAGS += -I ./benchmark
IFLAGS += -I ./benchmark/coremark
IFLAGS += -I ./benchmark/coremark/xtensa

DFLAGS := -DXT_BOARD  -DXT_TIMER_INDEX=0 -DXT_USE_SWPRI -DSTANDALONE=1 
DFLAGS += -DXTUTIL_NO_OVERRIDE 
DFLAGS += -DMAIN_HAS_NOARGC
DFLAGS += -DPERFORMANCE_RUN=1 -DITERATIONS=23000

CFLAGS  := -Wa,--longcalls -static -O2  -Wall -mtext-section-literals  -fno-inline-functions 
CFLAGS  += -ffunction-sections -fdata-sections  -mlongcalls  $(DFLAGS) $(IFLAGS)
CFLAGS  += -std=c99 -Wextra -Wa,--no-generate-flix -mtarget-align 
CFLAGS  += -Wno-unused-variable

LDFLAGS := -nostdlib -Wl,--gc-sections -Wl,--defsym=__prefctl_default=0x144 
LDFLAGS += -Wl,--defsym=__memctl_default_post=1
LDFLAGS += -Wl,--abi-windowed
LDFLAGS += -Wl,-Map,$(OUTDIR)/dsp.map
LDFLAGS += -Wl,--script link.ld

LIBS =  -L ./lib/  -lxtutil  -lhandler-reset -lc -lgloss -lhal -lm -lgcc -lc

APP_SRC := src/main
APP_SRC += src/fft
APP_SRC += src/msgbox

BENCHMARK_SRC := benchmark/linpack-pc
BENCHMARK_SRC += benchmark/dhry_1
BENCHMARK_SRC += benchmark/dhry_2
BENCHMARK_SRC += benchmark/coremark/core_list_join
BENCHMARK_SRC += benchmark/coremark/core_main
BENCHMARK_SRC += benchmark/coremark/core_matrix
BENCHMARK_SRC += benchmark/coremark/core_state
BENCHMARK_SRC += benchmark/coremark/core_util
BENCHMARK_SRC += benchmark/coremark/xtensa/core_portme

STARTUP_SRC += arch/crt1
STARTUP_SRC += arch/intlevel-set
STARTUP_SRC += arch/board-init
STARTUP_SRC += arch/rtos-help

KERNEL_SRC := kernel/FreeRTOS/event_groups
KERNEL_SRC += kernel/FreeRTOS/list
KERNEL_SRC += kernel/FreeRTOS/queue
KERNEL_SRC += kernel/FreeRTOS/stream_buffer
KERNEL_SRC += kernel/FreeRTOS/tasks
KERNEL_SRC += kernel/FreeRTOS/timers
KERNEL_SRC += kernel/MemMang/heap_4
KERNEL_SRC += kernel/portable/nmi-handler
KERNEL_SRC += kernel/portable/port
KERNEL_SRC += kernel/portable/portasm
KERNEL_SRC += kernel/portable/portclib
KERNEL_SRC += kernel/portable/xtensa_init
KERNEL_SRC += kernel/portable/xtensa_context
KERNEL_SRC += kernel/portable/xtensa_intr
KERNEL_SRC += kernel/portable/xtensa_intr_asm
KERNEL_SRC += kernel/portable/xtensa_overlay_os_hook
KERNEL_SRC += kernel/portable/xtensa_vectors

SRC := $(APP_SRC)
SRC += $(STARTUP_SRC)
SRC += $(KERNEL_SRC)
SRC += $(BENCHMARK_SRC)

LIB_PIECES = $(SRC)

LIB_OBJS = $(LIB_PIECES:%=$(BUILDDIR)/%.o)
LIB_DEPS = $(LIB_PIECES:%=$(BUILDDIR)/%.d)
LIB_OBJS += lib/crti.o
LIB_OBJS += lib/crtbegin.o
LIB_OBJS += lib/crtend.o
LIB_OBJS += lib/crtn.o

all:clean builddir $(APP)

builddir:
	$(Q)$(MKDIR) $(BUILDDIR)
	$(Q)$(MKDIR) $(BUILDDIR)/src
	$(Q)$(MKDIR) $(BUILDDIR)/arch
	$(Q)$(MKDIR) $(BUILDDIR)/kernel/FreeRTOS
	$(Q)$(MKDIR) $(BUILDDIR)/kernel/portable
	$(Q)$(MKDIR) $(BUILDDIR)/kernel/MemMang
	$(Q)$(MKDIR) $(BUILDDIR)/application
	$(Q)$(MKDIR) $(BUILDDIR)/benchmark
	$(Q)$(MKDIR) $(BUILDDIR)/benchmark/coremark
	$(Q)$(MKDIR) $(BUILDDIR)/benchmark/coremark/xtensa
	$(Q)$(MKDIR) $(BUILDDIR)/output

$(APP): $(LIB_OBJS) 
	$(Q)echo [LD] Linking $@
	$(Q)$(CC) $(CFLAGS) $(LDFLAGS) $(LIB_OBJS) $(LIBS) -o $(APP)
	$(Q)echo [OD] Objdump $@
	$(Q)$(OD) -D $(APP) > $(OUTDIR)/$(APP_NAME).dis
	$(Q)echo [RE] Readelf $@
	$(Q)$(RE) -a $(APP) > $(OUTDIR)/$(APP_NAME).readelf
	$(Q)echo -e '\033[0;31;1m'
	$(Q)$(SIZE) $(APP)
	$(Q)echo -e '\033[0;32;1m'
	$(Q)echo Build $(APP) Successful
	$(Q)echo -e '\033[0m'

$(BUILDDIR)/%.o: %.S
	$(Q)echo [AS] $<
	$(Q)$(CC) -c $(CFLAGS) -o $@ $<

$(BUILDDIR)/%.o: %.c
	$(Q)echo [CC] $<
	$(Q)$(CC) -c $(CFLAGS) -o $@ $<
	
clean:
	$(Q)rm -rf $(BUILDDIR)
