################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
INO_SRCS += \
..\Pong.ino 

CPP_SRCS += \
..\.ino.cpp \
..\ball.cpp \
..\game.cpp 

LINK_OBJ += \
.\.ino.cpp.o \
.\ball.cpp.o \
.\game.cpp.o 

INO_DEPS += \
.\Pong.ino.d 

CPP_DEPS += \
.\.ino.cpp.d \
.\ball.cpp.d \
.\game.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
.ino.cpp.o: ../.ino.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Users\Myatt\Desktop\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"C:\Users\Myatt\Desktop\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.14\cores\arduino" -I"C:\Users\Myatt\Desktop\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.14\variants\standard" -I"C:\Users\Myatt\Documents\Adafruit_NeoPixel-master\Adafruit_NeoPixel" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Pong.o: ../Pong.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Users\Myatt\Desktop\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"C:\Users\Myatt\Desktop\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.14\cores\arduino" -I"C:\Users\Myatt\Desktop\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.14\variants\standard" -I"C:\Users\Myatt\Documents\Adafruit_NeoPixel-master\Adafruit_NeoPixel" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

ball.cpp.o: ../ball.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Users\Myatt\Desktop\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"C:\Users\Myatt\Desktop\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.14\cores\arduino" -I"C:\Users\Myatt\Desktop\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.14\variants\standard" -I"C:\Users\Myatt\Documents\Adafruit_NeoPixel-master\Adafruit_NeoPixel" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

game.cpp.o: ../game.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Users\Myatt\Desktop\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"C:\Users\Myatt\Desktop\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.14\cores\arduino" -I"C:\Users\Myatt\Desktop\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.14\variants\standard" -I"C:\Users\Myatt\Documents\Adafruit_NeoPixel-master\Adafruit_NeoPixel" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '


