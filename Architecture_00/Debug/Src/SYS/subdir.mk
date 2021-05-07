################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/SYS/SYSTEM.c 

OBJS += \
./Src/SYS/SYSTEM.o 

C_DEPS += \
./Src/SYS/SYSTEM.d 


# Each subdirectory must supply rules for building sources it contributes
Src/SYS/SYSTEM.o: ../Src/SYS/SYSTEM.c Src/SYS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DNUCLEO_F042K6 -DSTM32F042K6Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/SYS/SYSTEM.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

