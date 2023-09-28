/*
 * SSD_init.h
 *
 *  Created on: Aug 17, 2023
 *      Author: Eslam
 */
#ifndef HAL_SSD_INIT_H_
#define HAL_SSD_INIT_H_

#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"
#include<util/delay.h>

#define PORTA    0
#define PORTB    1
#define PORTC    2
#define PORTD    3


#define Cathode  1
#define Anode    0

#define SSD_Type Cathode

  /* Following This Table For Common Cathode */
/***********************************************/
/* Decimal | Dot | g | f | e | d | c | b | a | */
/*    0    |  0  | 0 | 1 | 1 | 1 | 1 | 1 | 1 | */
/*    1    |  0  | 0 | 0 | 0 | 0 | 1 | 1 | 0 | */
/*    2    |  0  | 1 | 0 | 1 | 1 | 0 | 1 | 1 | */
/*    3    |  0  | 1 | 0 | 0 | 1 | 1 | 1 | 1 | */
/*    4    |  0  | 1 | 1 | 0 | 0 | 1 | 1 | 0 | */
/*    5    |  0  | 1 | 1 | 0 | 1 | 1 | 0 | 1 | */
/*    6    |  0  | 1 | 1 | 1 | 1 | 1 | 0 | 1 | */
/*    7    |  0  | 0 | 0 | 0 | 0 | 1 | 1 | 1 | */
/*    8    |  0  | 1 | 1 | 1 | 1 | 1 | 1 | 1 | */
/*    9    |  0  | 1 | 1 | 0 | 1 | 1 | 1 | 1 | */
/***********************************************/

#define Zero   0
#define Two    1
#define Three  3
#define Four   4
#define Five   5
#define Six    6
#define Seven  7
#define Eight  8
#define Nine   9

void HSSD_voidInit       (u8 A_u8PortNum);
void HSSD_voidDisplayNum (u8 A_u8PortNum, u8 A_u8Num);
void HSSD_voidClearSSD   (u8 A_u8PortNum);
void HSSD_voidCountUp    (u8 A_u8PortNum, u8 A_u8Num);
void HSSD_voidCountDown  (u8 A_u8PortNum, u8 A_u8Num);

#endif /* HAL_SSD_INIT_H_ */
