#include "ball.h"
#include "Arduino.h"




int ball::getPosition(){
    return this->BALL_STAT.currentPos;
}

void ball::reverseDirection(){
    BALL_STAT.velocityDirection = !BALL_STAT.velocityDirection;
    if(BALL_STAT.ballSpeed > 20){
        BALL_STAT.ballSpeed -= 10;
    }

    Serial.println(BALL_STAT.ballSpeed);
  }

void ball::tick(){


    if (millis() >= BALL_STAT.timeSinceLastTick + BALL_STAT.ballSpeed){
    	BALL_STAT.timeSinceLastTick = millis();


        if (BALL_STAT.currentPos <= 0){
            this->reverseDirection();

          }
        else if (BALL_STAT.currentPos >= 29){
            this->reverseDirection();
          }

        if (BALL_STAT.velocityDirection){
            BALL_STAT.currentPos += 1;
          }
        else{
            BALL_STAT.currentPos -= 1;
          }
        //Serial.print((BALL_STAT.currentPos));
        //Serial.print(" ");
      }
  }

void ball::reset(){

	BALL_STAT.currentPos = 15;
	//Int time to change pixel
	BALL_STAT.ballSpeed = 100;
	BALL_STAT.timeSinceLastTick = 0;
	//True is right, false is left. Left refers to the side with the soldered logic joint.
	BALL_STAT.velocityDirection = random(0, 2);

}

ball::ball(){

	BALL_STAT.currentPos = 15;
	//Int time to change pixel
	BALL_STAT.ballSpeed = 100;
	BALL_STAT.timeSinceLastTick = 0;
	//True is right, false is left. Left refers to the side with the soldered logic joint.
	BALL_STAT.velocityDirection = random(0,2);

}
