/*
 * Ex1.c
 *
 *  Created on: Sep 9, 2024
 *      Author: 2004p
 */
#include "main.h"


int count2s = 0;

void init_exercise1(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
}
void exercise1_run(){
	if(count2s == 2){
		HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
		HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
		count2s = 1;
	}
	else{
		count2s++;
	}
}


