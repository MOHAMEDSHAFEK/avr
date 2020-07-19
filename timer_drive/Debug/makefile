################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
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
timer_drive.lss \

FLASH_IMAGE += \
timer_drive.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: timer_drive.elf secondary-outputs

# Tool invocations
timer_drive.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,timer_drive.map -mmcu=atmega32 -o "timer_drive.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

timer_drive.lss: timer_drive.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S timer_drive.elf  >"timer_drive.lss"
	@echo 'Finished building: $@'
	@echo ' '

timer_drive.hex: timer_drive.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex timer_drive.elf  "timer_drive.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: timer_drive.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 timer_drive.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) timer_drive.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
