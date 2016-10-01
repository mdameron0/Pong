#ifndef GAME_H
#define GAME_H

struct stats{
  int player1Score;
  int player2Score;
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
};

#endif
