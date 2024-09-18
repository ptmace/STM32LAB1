/*
 * Ex3.c
 *
 *  Created on: Sep 9, 2024
 *      Author: 2004p
 */
#include "Ex3.h"


int count10s = 0;

void init_exercise3(){
	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
	HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);

	HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
	HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
	HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
	HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);

	HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
	HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
	HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);
	HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);
}

void exercise3_run(){
	switch(count10s){
		case 0:
			init_exercise3();
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);

			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
			HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
			count10s++;
			break;
		case 2:
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);

			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
			count10s++;
			break;
		case 5:
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
			HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);

			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
			HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);

			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, SET);
			count10s++;
			break;
		case 7:
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
			HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
			HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
			count10s++;
			break;
		case 9:
			count10s = 0;
			break;
		default:
			count10s++;
	}
}

