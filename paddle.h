/*
 * paddle.h
 *
 *  Created on: Oct 5, 2016
 *      Author: Myatt
 */

#ifndef PADDLE_H_
#define PADDLE_H_

struct paddleStats {
	unsigned int cooldown;
	unsigned long lastTimeUsed;
	bool active;
	unsigned int activeTime;

};

class paddle{
public:
	paddle();
	~paddle();
	void toggle();
	void tick();
	bool isActive();

private:
	paddleStats myStats;

};




#endif /* PADDLE_H_ */
