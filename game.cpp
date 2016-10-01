#include "game.h"
#include "ball.h"
#include "Arduino.h"
#include <Adafruit_NeoPixel.h>

#define LED_STRIP_PIN 6

//final variables
int const SIZEOFSTRIP = 30;

//initialize the strip variable
Adafruit_NeoPixel strip = Adafruit_NeoPixel(SIZEOFSTRIP, LED_STRIP_PIN, NEO_GRB + NEO_KHZ800);

//Other stuff to initialize
ball gameBall;
stats gameStats;


game::game(){

    gameBall = ball();
    gameStats.player1Score = 0;
    gameStats.player2Score = 0;

    //Initialize
    strip.begin();
    //Show blank (no LEDs have values asigned yet, so they're blank)

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

     this->render();
  }

void game::clickHandler(int player){


  }

void game::render(){
  blankRender();
  strip.setPixelColor(gameBall.getPosition(), 25, 25, 25);
  strip.show();
  }

void game::blankRender(){
    strip.clear();

  }

void game::show(){
	strip.show();
}

int game::position(){
	return gameBall.getPosition();

}
