# FreeRTOS-HIFI4-DSP

> ⚠ NOT official RTOS SDK and Compiler, **NOT Support DSP feature**

FreeRTOS for Cadence Tensilica HIFI 4 DSP, With GCC Compiler

## About Compiler
Cadence Tensilica HIFI 4 use Xtensa Xplorer and XCC for development. This Project does not support XCC or Xtensa Xplorer, We use GCC for Compile.

## How to build

1. Clone codes

```
git clone https://github.com/YuzukiHD/FreeRTOS-HIFI4-DSP.git
```

2. Download [Compiler](https://github.com/YuzukiHD/FreeRTOS-HIFI4-DSP/releases/download/Toolchains/xtensa-hifi4-dsp.tar.gz) and unzip it to tools

3. `make`

## ELF Loader
Here is a U-Boot Driver to load firmware to HIFI4 DSP  
- https://github.com/YuzukiHD/FreeRTOS-HIFI4-DSP/tree/master/host/uboot-driver/dsp
