/*
 * main.c
 *
 *  Created on: Aug 14, 2023
 *      Author: dell
 */

#include "../HAL/LCD_int.h"
#include "../MCAL/DIO.h"
#include <util/delay.h>

int main(){

		MDIO_voidSetPortDirection(PORTA,0Xff);
		MDIO_voidSetPortDirection(PORTB,0Xff);
		HLCD_voidInt();

		HLCD_voidSendString("Hello World !");
		HLCD_voidCursor(LCD_LINE_2,1);

	while(1){


	}
	return 0;
}
