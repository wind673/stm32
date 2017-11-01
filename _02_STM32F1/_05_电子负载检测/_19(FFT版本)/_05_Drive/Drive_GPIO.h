/*******************************(C) COPYRIGHT 2016 Wind（谢玉伸）*********************************/
/**============================================================================
* @FileName    : Drive_GPIO.h
* @Description : None	
* @Date        : 2016/8/7
* @By          : Wind（谢玉伸）
* @Email       : 1659567673@ qq.com
* @Platform    : Keil uVision5 v5.20 (STM32F103RCT6)
* @Explain     : None
*=============================================================================*/ 

/* 防止重调用 ----------------------------------------------------------------*/
#ifndef __DRIVE_GPIO_H
#define __DRIVE_GPIO_H  

/* 头文件包含 ----------------------------------------------------------------*/  
#include "User_Library.h"  

/* 全局宏定义 ----------------------------------------------------------------*/ 
#define TEST_PIN 					PCout(4) 	
#define PA7 						PAout(7) 	
#define LED_PIN(_X) 				PCout(_X)
#define RELAY_PIN_SWITCH 			PBout(10)
#define RELAY_PIN_LEVEL				PCout(8)

//设置电流档位
#define CURRENT_LEVEL(_X) \
do{ \
	RELAY_PIN_LEVEL = !_X; \
}while(0) \




/* 结构体声明 ----------------------------------------------------------------*/ 

/* 全局变量声明 --------------------------------------------------------------*/ 

/* 全局函数声明 --------------------------------------------------------------*/  
void GPIO_Test_Init(void); 
void GPIO_Relay_Init(void);
void GPIO_Key_Init(void);
void GPIO_LED_Init(void);

#endif
/*******************************(C) COPYRIGHT 2016 Wind（谢玉伸）*********************************/



