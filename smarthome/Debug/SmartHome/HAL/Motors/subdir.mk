################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
E:/embedded/Learn\ AVR/cots/smarthome/SmartHome/HAL/Motors/Motors.c 

OBJS += \
./SmartHome/HAL/Motors/Motors.o 

C_DEPS += \
./SmartHome/HAL/Motors/Motors.d 


# Each subdirectory must supply rules for building sources it contributes
SmartHome/HAL/Motors/Motors.o: E:/embedded/Learn\ AVR/cots/smarthome/SmartHome/HAL/Motors/Motors.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


