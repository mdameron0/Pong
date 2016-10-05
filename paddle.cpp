/*
 * paddle.cpp
 *
 *  Created on: Oct 5, 2016
 *      Author: Myatt
 */

#include "paddle.h"
#include "Arduino.h"

paddle::paddle(){
	myStats.active = false;
	//in ms.
	myStats.activeTime = 100;
	myStats.cooldown = 100;
	myStats.lastTimeUsed = 0;

}

paddle::~paddle(){

}

void paddle::toggle(){
	if (millis() < myStats.lastTimeUsed + myStats.cooldown){
		myStats.active = !myStats.active;
		myStats.lastTimeUsed = millis();
	}
}

void paddle::tick(){
	if (myStats.active && myStats.lastTimeUsed - millis() < myStats.activeTime){
		myStats.active = false;
	}

	return;

}

bool paddle::isActive(){
	return myStats.active;
}

