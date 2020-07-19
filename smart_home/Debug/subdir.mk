################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ADC_Program.c \
../DIO_Program.c \
../EXI_Program.c \
../GIE_Program.c \
../KEY_PAD_Program.c \
../LCD_4BIT_Program.c \
../TIMER_Program.c \
../main.c \
../smart_home.c 

OBJS += \
./ADC_Program.o \
./DIO_Program.o \
./EXI_Program.o \
./GIE_Program.o \
./KEY_PAD_Program.o \
./LCD_4BIT_Program.o \
./TIMER_Program.o \
./main.o \
./smart_home.o 

C_DEPS += \
./ADC_Program.d \
./DIO_Program.d \
./EXI_Program.d \
./GIE_Program.d \
./KEY_PAD_Program.d \
./LCD_4BIT_Program.d \
./TIMER_Program.d \
./main.d \
./smart_home.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


