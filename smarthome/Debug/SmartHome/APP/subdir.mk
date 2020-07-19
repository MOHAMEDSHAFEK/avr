################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
E:/embedded/Learn\ AVR/cots/smarthome/SmartHome/APP/Display.c \
E:/embedded/Learn\ AVR/cots/smarthome/SmartHome/APP/smarthome.c 

OBJS += \
./SmartHome/APP/Display.o \
./SmartHome/APP/smarthome.o 

C_DEPS += \
./SmartHome/APP/Display.d \
./SmartHome/APP/smarthome.d 


# Each subdirectory must supply rules for building sources it contributes
SmartHome/APP/Display.o: E:/embedded/Learn\ AVR/cots/smarthome/SmartHome/APP/Display.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

SmartHome/APP/smarthome.o: E:/embedded/Learn\ AVR/cots/smarthome/SmartHome/APP/smarthome.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


