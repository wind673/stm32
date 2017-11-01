/*******************************(C) COPYRIGHT 2017 Wind（谢玉伸）*********************************/
/**============================================================================
* @FileName    : App_LED.c
* @Description : None	
* @Date        : 2016/8/8
* @By          : Wind（谢玉伸）
* @Email       : 1659567673@ qq.com
* @Platform    : Keil uVision5 v5.20 (STM32L151CB)
* @Explain     : None
*=============================================================================*/ 

/* 头文件包含 ----------------------------------------------------------------*/
#include "App_LED.h"  
 
/* 私有宏定义 ----------------------------------------------------------------*/

/* 私有（静态）函数声明 ------------------------------------------------------*/

/* 全局变量定义 --------------------------------------------------------------*/ 

/* 全局变量声明 --------------------------------------------------------------*/
  
/* 全局函数编写 --------------------------------------------------------------*/
/**----------------------------------------------------------------------------
* @FunctionName  : LED()     
* @Description   : None 
* @Data          : 2016/8/8
* @Explain       : None
------------------------------------------------------------------------------*/
unsigned int LED_Main(void)		
{        
	LED_Scan_Handle();  
	
	return 0;																	
}		

unsigned int LED_Start(void)		
{        
	LED_Init();
	
	
	return 0;																	
} 			


Type_AppList App_LED = {LED_Main,NULL,LED_Start,NULL, \
						OS_STATE_ACTIVE,OS_THREAD_SYSTEM, \
						(uint8_t*)"LED",1};			
						
 




						
																				
/*******************************(C) COPYRIGHT 2017 Wind（谢玉伸）*********************************/
















