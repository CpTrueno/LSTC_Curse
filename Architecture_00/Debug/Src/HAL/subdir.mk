################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/HAL/ANALOG.c \
../Src/HAL/BUZZ.c \
../Src/HAL/CAN.c \
../Src/HAL/I2C.c \
../Src/HAL/LED.c \
../Src/HAL/SERIE.c \
../Src/HAL/SWITCH.c 

OBJS += \
./Src/HAL/ANALOG.o \
./Src/HAL/BUZZ.o \
./Src/HAL/CAN.o \
./Src/HAL/I2C.o \
./Src/HAL/LED.o \
./Src/HAL/SERIE.o \
./Src/HAL/SWITCH.o 

C_DEPS += \
./Src/HAL/ANALOG.d \
./Src/HAL/BUZZ.d \
./Src/HAL/CAN.d \
./Src/HAL/I2C.d \
./Src/HAL/LED.d \
./Src/HAL/SERIE.d \
./Src/HAL/SWITCH.d 


# Each subdirectory must supply rules for building sources it contributes
Src/HAL/ANALOG.o: ../Src/HAL/ANALOG.c Src/HAL/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DNUCLEO_F042K6 -DSTM32F042K6Tx -c -I../Inc -I"Q:/06.Cursos y formacion/202104-Curso de Software embebido/3-Carpetas de usuarios/Jose Maria/Architecture_00/Inc/SHA" -I"Q:/06.Cursos y formacion/202104-Curso de Software embebido/3-Carpetas de usuarios/Jose Maria/Architecture_00/Inc/SYS" -I"Q:/06.Cursos y formacion/202104-Curso de Software embebido/3-Carpetas de usuarios/Jose Maria/Architecture_00/Inc/HAL" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/HAL/ANALOG.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/HAL/BUZZ.o: ../Src/HAL/BUZZ.c Src/HAL/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DNUCLEO_F042K6 -DSTM32F042K6Tx -c -I../Inc -I"Q:/06.Cursos y formacion/202104-Curso de Software embebido/3-Carpetas de usuarios/Jose Maria/Architecture_00/Inc/SHA" -I"Q:/06.Cursos y formacion/202104-Curso de Software embebido/3-Carpetas de usuarios/Jose Maria/Architecture_00/Inc/SYS" -I"Q:/06.Cursos y formacion/202104-Curso de Software embebido/3-Carpetas de usuarios/Jose Maria/Architecture_00/Inc/HAL" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/HAL/BUZZ.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/HAL/CAN.o: ../Src/HAL/CAN.c Src/HAL/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DNUCLEO_F042K6 -DSTM32F042K6Tx -c -I../Inc -I"Q:/06.Cursos y formacion/202104-Curso de Software embebido/3-Carpetas de usuarios/Jose Maria/Architecture_00/Inc/SHA" -I"Q:/06.Cursos y formacion/202104-Curso de Software embebido/3-Carpetas de usuarios/Jose Maria/Architecture_00/Inc/SYS" -I"Q:/06.Cursos y formacion/202104-Curso de Software embebido/3-Carpetas de usuarios/Jose Maria/Architecture_00/Inc/HAL" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/HAL/CAN.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/HAL/I2C.o: ../Src/HAL/I2C.c Src/HAL/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DNUCLEO_F042K6 -DSTM32F042K6Tx -c -I../Inc -I"Q:/06.Cursos y formacion/202104-Curso de Software embebido/3-Carpetas de usuarios/Jose Maria/Architecture_00/Inc/SHA" -I"Q:/06.Cursos y formacion/202104-Curso de Software embebido/3-Carpetas de usuarios/Jose Maria/Architecture_00/Inc/SYS" -I"Q:/06.Cursos y formacion/202104-Curso de Software embebido/3-Carpetas de usuarios/Jose Maria/Architecture_00/Inc/HAL" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/HAL/I2C.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/HAL/LED.o: ../Src/HAL/LED.c Src/HAL/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DNUCLEO_F042K6 -DSTM32F042K6Tx -c -I../Inc -I"Q:/06.Cursos y formacion/202104-Curso de Software embebido/3-Carpetas de usuarios/Jose Maria/Architecture_00/Inc/SHA" -I"Q:/06.Cursos y formacion/202104-Curso de Software embebido/3-Carpetas de usuarios/Jose Maria/Architecture_00/Inc/SYS" -I"Q:/06.Cursos y formacion/202104-Curso de Software embebido/3-Carpetas de usuarios/Jose Maria/Architecture_00/Inc/HAL" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/HAL/LED.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/HAL/SERIE.o: ../Src/HAL/SERIE.c Src/HAL/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DNUCLEO_F042K6 -DSTM32F042K6Tx -c -I../Inc -I"Q:/06.Cursos y formacion/202104-Curso de Software embebido/3-Carpetas de usuarios/Jose Maria/Architecture_00/Inc/SHA" -I"Q:/06.Cursos y formacion/202104-Curso de Software embebido/3-Carpetas de usuarios/Jose Maria/Architecture_00/Inc/SYS" -I"Q:/06.Cursos y formacion/202104-Curso de Software embebido/3-Carpetas de usuarios/Jose Maria/Architecture_00/Inc/HAL" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/HAL/SERIE.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/HAL/SWITCH.o: ../Src/HAL/SWITCH.c Src/HAL/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DNUCLEO_F042K6 -DSTM32F042K6Tx -c -I../Inc -I"Q:/06.Cursos y formacion/202104-Curso de Software embebido/3-Carpetas de usuarios/Jose Maria/Architecture_00/Inc/SHA" -I"Q:/06.Cursos y formacion/202104-Curso de Software embebido/3-Carpetas de usuarios/Jose Maria/Architecture_00/Inc/SYS" -I"Q:/06.Cursos y formacion/202104-Curso de Software embebido/3-Carpetas de usuarios/Jose Maria/Architecture_00/Inc/HAL" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/HAL/SWITCH.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

