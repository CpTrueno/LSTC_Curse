################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/ANALOG.c \
../Src/BUZZER.c \
../Src/CAN.c \
../Src/I2CS.c \
../Src/LED.c \
../Src/LEDD.c \
../Src/RELOJ.c \
../Src/SERIE.c \
../Src/SWITCH.c \
../Src/SYSTEM.c \
../Src/main.c \
../Src/syscalls.c \
../Src/sysmem.c 

OBJS += \
./Src/ANALOG.o \
./Src/BUZZER.o \
./Src/CAN.o \
./Src/I2CS.o \
./Src/LED.o \
./Src/LEDD.o \
./Src/RELOJ.o \
./Src/SERIE.o \
./Src/SWITCH.o \
./Src/SYSTEM.o \
./Src/main.o \
./Src/syscalls.o \
./Src/sysmem.o 

C_DEPS += \
./Src/ANALOG.d \
./Src/BUZZER.d \
./Src/CAN.d \
./Src/I2CS.d \
./Src/LED.d \
./Src/LEDD.d \
./Src/RELOJ.d \
./Src/SERIE.d \
./Src/SWITCH.d \
./Src/SYSTEM.d \
./Src/main.d \
./Src/syscalls.d \
./Src/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Src/ANALOG.o: ../Src/ANALOG.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F042K6Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -Wstrict-prototypes -fstack-usage -MMD -MP -MF"Src/ANALOG.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/BUZZER.o: ../Src/BUZZER.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F042K6Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -Wstrict-prototypes -fstack-usage -MMD -MP -MF"Src/BUZZER.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/CAN.o: ../Src/CAN.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F042K6Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -Wstrict-prototypes -fstack-usage -MMD -MP -MF"Src/CAN.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/I2CS.o: ../Src/I2CS.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F042K6Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -Wstrict-prototypes -fstack-usage -MMD -MP -MF"Src/I2CS.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/LED.o: ../Src/LED.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F042K6Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -Wstrict-prototypes -fstack-usage -MMD -MP -MF"Src/LED.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/LEDD.o: ../Src/LEDD.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F042K6Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -Wstrict-prototypes -fstack-usage -MMD -MP -MF"Src/LEDD.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/RELOJ.o: ../Src/RELOJ.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F042K6Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -Wstrict-prototypes -fstack-usage -MMD -MP -MF"Src/RELOJ.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/SERIE.o: ../Src/SERIE.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F042K6Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -Wstrict-prototypes -fstack-usage -MMD -MP -MF"Src/SERIE.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/SWITCH.o: ../Src/SWITCH.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F042K6Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -Wstrict-prototypes -fstack-usage -MMD -MP -MF"Src/SWITCH.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/SYSTEM.o: ../Src/SYSTEM.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F042K6Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -Wstrict-prototypes -fstack-usage -MMD -MP -MF"Src/SYSTEM.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/main.o: ../Src/main.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F042K6Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -Wstrict-prototypes -fstack-usage -MMD -MP -MF"Src/main.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/syscalls.o: ../Src/syscalls.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F042K6Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -Wstrict-prototypes -fstack-usage -MMD -MP -MF"Src/syscalls.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/sysmem.o: ../Src/sysmem.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F042K6Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -Wstrict-prototypes -fstack-usage -MMD -MP -MF"Src/sysmem.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

