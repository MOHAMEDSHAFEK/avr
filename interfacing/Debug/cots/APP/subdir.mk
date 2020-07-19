################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
E:/embedded/Learn\ AVR/cots/APP/ADC.c \
E:/embedded/Learn\ AVR/cots/APP/ADCI.c \
E:/embedded/Learn\ AVR/cots/APP/EXI.c \
E:/embedded/Learn\ AVR/cots/APP/LCD.c \
E:/embedded/Learn\ AVR/cots/APP/LCD_4BIT.c \
E:/embedded/Learn\ AVR/cots/APP/LED.c \
E:/embedded/Learn\ AVR/cots/APP/SEGMENT.c \
E:/embedded/Learn\ AVR/cots/APP/dc_motor.c \
E:/embedded/Learn\ AVR/cots/APP/key_pad.c \
E:/embedded/Learn\ AVR/cots/APP/push_button.c 

OBJS += \
./cots/APP/ADC.o \
./cots/APP/ADCI.o \
./cots/APP/EXI.o \
./cots/APP/LCD.o \
./cots/APP/LCD_4BIT.o \
./cots/APP/LED.o \
./cots/APP/SEGMENT.o \
./cots/APP/dc_motor.o \
./cots/APP/key_pad.o \
./cots/APP/push_button.o 

C_DEPS += \
./cots/APP/ADC.d \
./cots/APP/ADCI.d \
./cots/APP/EXI.d \
./cots/APP/LCD.d \
./cots/APP/LCD_4BIT.d \
./cots/APP/LED.d \
./cots/APP/SEGMENT.d \
./cots/APP/dc_motor.d \
./cots/APP/key_pad.d \
./cots/APP/push_button.d 


# Each subdirectory must supply rules for building sources it contributes
cots/APP/ADC.o: E:/embedded/Learn\ AVR/cots/APP/ADC.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

cots/APP/ADCI.o: E:/embedded/Learn\ AVR/cots/APP/ADCI.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

cots/APP/EXI.o: E:/embedded/Learn\ AVR/cots/APP/EXI.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

cots/APP/LCD.o: E:/embedded/Learn\ AVR/cots/APP/LCD.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

cots/APP/LCD_4BIT.o: E:/embedded/Learn\ AVR/cots/APP/LCD_4BIT.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

cots/APP/LED.o: E:/embedded/Learn\ AVR/cots/APP/LED.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

cots/APP/SEGMENT.o: E:/embedded/Learn\ AVR/cots/APP/SEGMENT.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

cots/APP/dc_motor.o: E:/embedded/Learn\ AVR/cots/APP/dc_motor.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

cots/APP/key_pad.o: E:/embedded/Learn\ AVR/cots/APP/key_pad.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

cots/APP/push_button.o: E:/embedded/Learn\ AVR/cots/APP/push_button.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


