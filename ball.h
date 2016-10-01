#ifndef BALL_H
#define BALL_H

#include "Arduino.h"

struct ballStats{
  int currentPos;
  //In time to pixel change
  int ballSpeed;
  unsigned long timeSinceLastTick;
  bool velocityDirection;
  };

class ball{
	ballStats BALL_STAT;
public:

	ball();
	int getPosition();
	void tick();
	void reverseDirection();
private:

};

#endif
