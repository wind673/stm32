/*******************************(C) COPYRIGHT 2017 Wind(谢玉伸) *********************************/
/**============================================================================
* @FileName    : Drive_DutyMeasuring.h
* @Description : None
* @Date        : 2017年7月17日
* @By          : Wind(谢玉伸)
* @Email       : 1659567673@qq.com
* @Platform    : Keil uVision5 v5.15 (STM32F407ZG)
* @Explain     : 测占空比
*=============================================================================*/
/* 防止重调用 ----------------------------------------------------------------*/
#ifndef __DRIVE_DUTYMEASURING_H
#define __DRIVE_DUTYMEASURING_H

/* 头文件包含 ----------------------------------------------------------------*/
#include "User_Library.h"

/* 全局宏定义 ----------------------------------------------------------------*/
#define DUTY_NUM 	3

/* 结构体声明 ----------------------------------------------------------------*/

/* 全局变量声明 --------------------------------------------------------------*/
extern u32 Duty_TimeOver[DUTY_NUM];

/* 全局函数声明 --------------------------------------------------------------*/
int DutyMeasuring_Init(void);
int DutyMeasuring_IRQHandler(u8 ch);
float Duty_Read(u8 ch);








#endif
/*******************************(C) COPYRIGHT 2017 Wind(谢玉伸) *********************************/







