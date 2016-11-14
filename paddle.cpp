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
	myStats.activeTime = 200;
	myStats.cooldown = 100;
	myStats.lastTimeUsed = 0;

}

paddle::~paddle(){

}

void paddle::buttonDown(){

	if (millis() > myStats.lastTimeUsed + myStats.cooldown){
		Serial.println("Activate");
		myStats.active = true;
		myStats.lastTimeUsed = millis();
	}
}

void paddle::tick(){
	if (myStats.active && millis() - myStats.lastTimeUsed > myStats.activeTime){
		Serial.println("DEactivate");
		myStats.active = false;
	}

	return;

}

void paddle::hit(){

	this->myStats.active = false;
}

bool paddle::isActive(){
	return myStats.active;
}

void paddle::reset(){
	this->myStats.active = false;
	this->myStats.lastTimeUsed = 0;
}
