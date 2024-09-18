/*
 * Ex10.c
 *
 *  Created on: Sep 18, 2024
 *      Author: 2004p
 */


#include "Ex10.h"


int hour = 3;
int min = 55;
int sec = 59;

void ClearAllClock(){
	init_exercise3();
}
void Clock_run(){

	ClearAllClock();

	//Set second
	if(sec < 60){
		setNumberOnClock(sec/5);
	}
	else{
		sec = 0;
		min++;
		setNumberOnClock(sec);
	}

	//Set minute
	if(min < 60){
		setNumberOnClock(min/5);
	}
	else{
		min = 0;
		hour++;
		setNumberOnClock(min);
	}

	//Set hour
	if(hour < 12){
		setNumberOnClock(hour);
	}
	else{
		hour = 0;
		setNumberOnClock(hour);
	}

	sec++;
}
