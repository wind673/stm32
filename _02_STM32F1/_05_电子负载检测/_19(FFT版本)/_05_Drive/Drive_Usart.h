/*******************************(C) COPYRIGHT 2016 Wind（谢玉伸）*********************************/
/**============================================================================
* @FileName    : Drive_Usart.h
* @Description : None
* @Date        : 2016/11/11
* @By          : Wind（谢玉伸）
* @Email       : 1659567673@ qq.com
* @Platform    : Keil uVision5 v5.15 (STM32F103)
* @Explain     : None
*=============================================================================*/

/* 防止重调用 ----------------------------------------------------------------*/
#ifndef __DRIVE_USART_H
#define __DRIVE_USART_H

/* 头文件包含 ----------------------------------------------------------------*/
#include "User_Library.h"

/* 全局宏定义 ----------------------------------------------------------------*/

/* 结构体声明 ----------------------------------------------------------------*/

/* 全局变量声明 --------------------------------------------------------------*/

/* 全局函数声明 --------------------------------------------------------------*/ 
void Usart2_Init(u32 bound); 
void USART_Str_Send(USART_TypeDef* USARTx,u8 *Str);
	
#endif
/*******************************(C) COPYRIGHT 2016 Wind（谢玉伸）*********************************/






