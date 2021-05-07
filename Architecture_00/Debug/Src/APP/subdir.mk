################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/APP/main.c \
../Src/APP/syscalls.c \
../Src/APP/sysmem.c 

OBJS += \
./Src/APP/main.o \
./Src/APP/syscalls.o \
./Src/APP/sysmem.o 

C_DEPS += \
./Src/APP/main.d \
./Src/APP/syscalls.d \
./Src/APP/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Src/APP/main.o: ../Src/APP/main.c Src/APP/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DNUCLEO_F042K6 -DSTM32F042K6Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/APP/main.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/APP/syscalls.o: ../Src/APP/syscalls.c Src/APP/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DNUCLEO_F042K6 -DSTM32F042K6Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/APP/syscalls.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/APP/sysmem.o: ../Src/APP/sysmem.c Src/APP/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DNUCLEO_F042K6 -DSTM32F042K6Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/APP/sysmem.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

