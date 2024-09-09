/*
 * Ex2.c
 *
 *  Created on: Sep 9, 2024
 *      Author: 2004p
 */

#include "Ex2.h"

int count10s = 0;

void init_exercise2(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
}
void exercise2_run(){
	switch(count10s){
		case 0:
			init_exercise2();
			count10s++;
			break;
		case 5:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
			count10s++;
			break;
		case 7:
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
			count10s++;
			break;
		case 9:
			count10s = 0;
			break;
		default:
			count10s++;
	}
}

