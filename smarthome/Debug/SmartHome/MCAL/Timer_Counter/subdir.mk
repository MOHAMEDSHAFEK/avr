################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
E:/embedded/Learn\ AVR/cots/smarthome/SmartHome/MCAL/Timer_Counter/Timer_Count0_Program.c \
E:/embedded/Learn\ AVR/cots/smarthome/SmartHome/MCAL/Timer_Counter/Timer_Count1_Program.c \
E:/embedded/Learn\ AVR/cots/smarthome/SmartHome/MCAL/Timer_Counter/Timer_Count2_Program.c 

OBJS += \
./SmartHome/MCAL/Timer_Counter/Timer_Count0_Program.o \
./SmartHome/MCAL/Timer_Counter/Timer_Count1_Program.o \
./SmartHome/MCAL/Timer_Counter/Timer_Count2_Program.o 

C_DEPS += \
./SmartHome/MCAL/Timer_Counter/Timer_Count0_Program.d \
./SmartHome/MCAL/Timer_Counter/Timer_Count1_Program.d \
./SmartHome/MCAL/Timer_Counter/Timer_Count2_Program.d 


# Each subdirectory must supply rules for building sources it contributes
SmartHome/MCAL/Timer_Counter/Timer_Count0_Program.o: E:/embedded/Learn\ AVR/cots/smarthome/SmartHome/MCAL/Timer_Counter/Timer_Count0_Program.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

SmartHome/MCAL/Timer_Counter/Timer_Count1_Program.o: E:/embedded/Learn\ AVR/cots/smarthome/SmartHome/MCAL/Timer_Counter/Timer_Count1_Program.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

SmartHome/MCAL/Timer_Counter/Timer_Count2_Program.o: E:/embedded/Learn\ AVR/cots/smarthome/SmartHome/MCAL/Timer_Counter/Timer_Count2_Program.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


