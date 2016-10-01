#include <Adafruit_NeoPixel.h>
#include "ball.h"
#include "game.h"
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define BUTTON_ONE_PIN 4
#define BUTTON_TWO_PIN 5

game gameState;

void setup() {
	pinMode(13, OUTPUT);
	pinMode(6, OUTPUT);
	Serial.begin(9600);
}

void loop() {

	gameState.logicTick();


}
