################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include cots/MCAL/GIE/subdir.mk
-include cots/MCAL/EXI/subdir.mk
-include cots/MCAL/DIO/subdir.mk
-include cots/MCAL/ADC/subdir.mk
-include cots/HAL/SEVEN_SEGMENT/subdir.mk
-include cots/HAL/LCD_4BIT/subdir.mk
-include cots/HAL/LCD/subdir.mk
-include cots/HAL/KEY_PAD/subdir.mk
-include cots/HAL/DIO_FUNCTION/subdir.mk
-include cots/APP/clalcluter/subdir.mk
-include cots/APP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
interfacing.lss \

FLASH_IMAGE += \
interfacing.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: interfacing.elf secondary-outputs

# Tool invocations
interfacing.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,interfacing.map -mmcu=atmega32 -o "interfacing.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

interfacing.lss: interfacing.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S interfacing.elf  >"interfacing.lss"
	@echo 'Finished building: $@'
	@echo ' '

interfacing.hex: interfacing.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex interfacing.elf  "interfacing.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: interfacing.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 interfacing.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) interfacing.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
