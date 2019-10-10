/***************************************************************************************************************************
* This file is subject to the terms and conditions defined in file 'LICENSE.txt', 
* which is part of this source code package. 
*
* Project									: Example with the Vector Table (Interrupt Priorties)
* Program Name						: STM32F_VectorTable
* Author									: vkaiser
* Date Created						: Oct-10-2019
* 
* Purpose									: 
*
*														
* MCU											: STM32F407VGT6
* Language								: C
* Hardware Modifications	: N/A
* Debugger								: ST-Link Debugger (on-board)
*
* Repo / Revision History	: https://github.com/vlkaiser/STM32F_VectorTable
*
* - Special Setup -
* Keil Pack Installer 		: Device Specific DFP
*													:
*		
* Revision History				:
* 	Date				Author			Notes
* 						vkaiser			- Initial commit
*
***************************************************************************************************************************/
#include <stdint.h>	
#include <stm32f407xx.h>		//Device-specific

/**************************************************************************************************************************/
/* Definitions */
char const myData[] = "I love embedded programming";		//const or read-only data store in FLASH of MCU
#define BASE_ADDRESS_OF_SRAM 0x20000000

/**************************************************************************************************************************/

/**************************************************************************************************************************/
/* Main */
int main(void)
{
	for(int i = 0; i < sizeof(myData); i++)
	{
		*((uint8_t*) BASE_ADDRESS_OF_SRAM + i) = myData[i];
	}
		
	return 0;
}

void NMI_Handler(void)
{
	
}

void USART3_IRQHandler(void)
{
}