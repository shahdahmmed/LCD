/*
 * LCD_int.h
 *
 *  Created on: Aug 15, 2023
 *      Author: dell
 */

#ifndef HAL_LCD_INT_H_
#define HAL_LCD_INT_H_

#include "../LIB/BIT_MATH.h"
#include "../LIB/STD_TYPES.h"
#include "../MCAL/DIO.h"
#include <util/delay.h>

#define Data_Port PORTA
#define Control_Port PORTB

#define LCD_ROW_1 127
#define LCD_ROW_2 191

#define LCD_LINE_1 1
#define LCD_LINE_2 2

#define LCD_functionset   0b00111100
#define LCD_DisplayONOFF  0b00001100
#define LCD_Clear         0b00000001
#define LCD_EntryMode     0b00000110

void HLCD_voidInt();
void HLCD_voidSendCommand(u8 A_u8cmd);
void HLCD_voidSendData(u8 A_u8Data);
void HLCD_voidClear();
void HLCD_voidCursor(u8 A_u8RowNum , u8 A_u8ColNum);
void HLCD_voidSendString(u8 *A_u8PtrString);


#endif /* HAL_LCD_INT_H_ */
