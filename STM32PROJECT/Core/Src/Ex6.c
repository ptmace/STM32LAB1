/*
 * Ex6.c
 *
 *  Created on: Sep 9, 2024
 *      Author: 2004p
 */

#include "Ex6.h"

int count = 0;
void exercise6_run(){
	switch(count){
		case(0):
			init_exercise3();
			count++;
			break;
		case(1):
			HAL_GPIO_TogglePin(LED_1_GPIO_Port, LED_1_Pin);
			count++;
			break;
		case(2):
			HAL_GPIO_TogglePin(LED_1_GPIO_Port, LED_1_Pin);
			HAL_GPIO_TogglePin(LED_2_GPIO_Port, LED_2_Pin);
			count++;
			break;
		case(3):
			HAL_GPIO_TogglePin(LED_3_GPIO_Port, LED_3_Pin);
			HAL_GPIO_TogglePin(LED_2_GPIO_Port, LED_2_Pin);
			count++;
			break;
		case(4):
			HAL_GPIO_TogglePin(LED_3_GPIO_Port, LED_3_Pin);
			HAL_GPIO_TogglePin(LED_4_GPIO_Port, LED_4_Pin);
			count++;
			break;
		case(5):
			HAL_GPIO_TogglePin(LED_5_GPIO_Port, LED_5_Pin);
			HAL_GPIO_TogglePin(LED_4_GPIO_Port, LED_4_Pin);
			count++;
			break;
		case(6):
			HAL_GPIO_TogglePin(LED_5_GPIO_Port, LED_5_Pin);
			HAL_GPIO_TogglePin(LED_6_GPIO_Port, LED_6_Pin);
			count++;
			break;
		case(7):
			HAL_GPIO_TogglePin(LED_7_GPIO_Port, LED_7_Pin);
			HAL_GPIO_TogglePin(LED_6_GPIO_Port, LED_6_Pin);
			count++;
			break;
		case(8):
			HAL_GPIO_TogglePin(LED_7_GPIO_Port, LED_7_Pin);
			HAL_GPIO_TogglePin(LED_8_GPIO_Port, LED_8_Pin);
			count++;
			break;
		case(9):
			HAL_GPIO_TogglePin(LED_9_GPIO_Port, LED_9_Pin);
			HAL_GPIO_TogglePin(LED_8_GPIO_Port, LED_8_Pin);
			count++;
			break;
		case(10):
			HAL_GPIO_TogglePin(LED_9_GPIO_Port, LED_9_Pin);
			HAL_GPIO_TogglePin(LED_10_GPIO_Port, LED_10_Pin);
			count++;
			break;
		case(11):
			HAL_GPIO_TogglePin(LED_11_GPIO_Port, LED_11_Pin);
			HAL_GPIO_TogglePin(LED_10_GPIO_Port, LED_10_Pin);
			count++;
			break;
		case(12):
			HAL_GPIO_TogglePin(LED_11_GPIO_Port, LED_11_Pin);
			HAL_GPIO_TogglePin(LED_12_GPIO_Port, LED_12_Pin);
			count++;
			break;
		case(13):
			HAL_GPIO_TogglePin(LED_1_GPIO_Port, LED_1_Pin);
			HAL_GPIO_TogglePin(LED_2_GPIO_Port, LED_2_Pin);
			HAL_GPIO_TogglePin(LED_3_GPIO_Port, LED_3_Pin);
			HAL_GPIO_TogglePin(LED_4_GPIO_Port, LED_4_Pin);
			HAL_GPIO_TogglePin(LED_5_GPIO_Port, LED_5_Pin);
			HAL_GPIO_TogglePin(LED_6_GPIO_Port, LED_6_Pin);
			HAL_GPIO_TogglePin(LED_7_GPIO_Port, LED_7_Pin);
			HAL_GPIO_TogglePin(LED_8_GPIO_Port, LED_8_Pin);
			HAL_GPIO_TogglePin(LED_9_GPIO_Port, LED_9_Pin);
			HAL_GPIO_TogglePin(LED_10_GPIO_Port, LED_10_Pin);
			HAL_GPIO_TogglePin(LED_11_GPIO_Port, LED_11_Pin);
			count = 0;
			break;
		default:
			count = 0;
	}
}
