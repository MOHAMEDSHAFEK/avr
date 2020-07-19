################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
E:/embedded/Learn\ AVR/cots/smarthome/SmartHome/HAL/Sensors/Sensors.c 

OBJS += \
./SmartHome/HAL/Sensors/Sensors.o 

C_DEPS += \
./SmartHome/HAL/Sensors/Sensors.d 


# Each subdirectory must supply rules for building sources it contributes
SmartHome/HAL/Sensors/Sensors.o: E:/embedded/Learn\ AVR/cots/smarthome/SmartHome/HAL/Sensors/Sensors.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


