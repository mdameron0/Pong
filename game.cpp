#include "game.h"
#include "ball.h"
#include "Arduino.h"
#include <Adafruit_NeoPixel.h>

#define LED_STRIP_PIN 6

//final variables
int const SIZEOFSTRIP = 30;

//initialize the strip variable
Adafruit_NeoPixel strip = Adafruit_NeoPixel(SIZEOFSTRIP, LED_STRIP_PIN, NEO_RGB + NEO_KHZ800);

//Other stuff to initialize
ball gameBall;
stats gameStats;


game::game(){

    gameBall = ball();
    gameStats.player1Score = 0;
    gameStats.player2Score = 0;

    gameStats.player1Paddle = paddle();
    gameStats.player2Paddle = paddle();

    //LED that, if touched, calles a lose.
    gameStats.player1DeadZone = 0;
    gameStats.player2DeadZone = SIZEOFSTRIP - 1;
    //Initialize
    strip.begin();
    //Show blank (no LEDs have values asigned yet, so they're blank)
    strip.clear();

  }

game::~game(){
    //Put in strip stuff here:

    //clear variables for this game.
    delete &gameBall;
  }

//Called to start a game
void game::start(){

  }

//Called to updateLogic
void game::logicTick(){

    gameBall.tick();
    gameStats.player1Paddle.tick();
    gameStats.player2Paddle.tick();
    this->scoreCheck();
    this->render();
  }

void game::clickHandler(int player){
	/*
	 * Ehhhhhhhhh. We could just check for the range that the ball is in within this spot and avoid the whole paddle paradigm thing.
	 * Honestly, I think that's the best idea, and just use the paddle class to keep track of different stats.
	 * But at that point you could really just make a struct in this class since we don't ever have to call a function for the paddle to work.
	 * Than again, the paddle class will handle all the cooldown information. So maybe leave it seperate for readability.
	 */

  }

void game::render(){
  blankRender();
  strip.setPixelColor(gameBall.getPosition(), 25, 25, 25);
  strip.show();
  }

void game::blankRender(){
    strip.clear();
    strip.setPixelColor(0, 0, 25, 0);
    strip.setPixelColor(SIZEOFSTRIP - 1, 0, 25, 0);
  }

void game::show(){
	strip.show();
}

int game::position(){
	return gameBall.getPosition();

}

void game::scoreCheck(){
	if (gameBall.getPosition() == gameStats.player1DeadZone){
		gameStats.player2Score++;
		this->winAnimation(2);
		this->reset();
		Serial.print("player 2 scores: ");
		Serial.println (gameStats.player2Score);
	} else if (gameBall.getPosition() == gameStats.player2DeadZone){
		gameStats.player1Score++;
		this->winAnimation(1);
		this->reset();
		Serial.print("player 1 scores: ");
		Serial.println(gameStats.player1Score);
	}

}

void game::reset(){
	gameBall.reset();
	this->render();
	delay(1000);
}

void game::winAnimation(int winner){
	int green, red;
	if (winner == 1){
		green = 0;
		red = 29;
	} else {
		green = 29;
		red = 0;
	}

	for (int i = 0; i < SIZEOFSTRIP/2; i++){
		strip.setPixelColor(red, 0, 25, 0);
		strip.setPixelColor(green, 25, 0, 0);
		if (winner == 1){
			green++;
			red--;
		} else {
			green--;
			red++;
		}
		this->show();
		delay(100);
	}
	strip.clear();
	this->show();

}
