#include "paddle.h"
#ifndef GAME_H
#define GAME_H

struct stats{
  int player1Score;
  int player2Score;

  paddle player1Paddle;
  paddle player2Paddle;

  int player1DeadZone;
  int player2DeadZone;
  };
class game{
public:
  game();
  ~game();
  //called to start game
  void start();
  //handles button pushes
  void clickHandler(int player);
  //Called to do a logic tick
  void logicTick();
  void show();
  void render();
  int position();
private:
  void blankRender();
  void scoreCheck();
  void reset();
  void winAnimation(int winner);
};

#endif
