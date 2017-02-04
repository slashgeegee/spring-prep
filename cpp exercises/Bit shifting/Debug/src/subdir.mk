################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Bit\ shifting.cpp 

OBJS += \
./src/Bit\ shifting.o 

CPP_DEPS += \
./src/Bit\ shifting.d 


# Each subdirectory must supply rules for building sources it contributes
src/Bit\ shifting.o: ../src/Bit\ shifting.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Bit shifting.d" -MT"src/Bit\ shifting.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


