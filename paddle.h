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
	void buttonDown();
	void tick();
	bool isActive();
	void reset();
	void hit();

private:
	paddleStats myStats;

};




#endif /* PADDLE_H_ */
