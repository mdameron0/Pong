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
	//Player 1 button
	pinMode(7, INPUT);
	//Player 2 button
	pinMode(8, INPUT);

	Serial.begin(9600);

	Serial.println(digitalRead(8));
	Serial.println (digitalRead(7));

}

void loop() {

	gameState.logicTick();

}
