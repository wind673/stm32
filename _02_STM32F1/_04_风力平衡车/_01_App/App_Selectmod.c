/*******************************(C) COPYRIGHT 2016 Wind（谢玉伸）*********************************/
/**============================================================================
* @FileName    : App_Test.c
* @Description : None	
* @Date        : 2016/8/8
* @By          : Wind（谢玉伸）
* @Email       : 1659567673@ qq.com
* @Platform    : Keil uVision5 v5.20 (STM32F103RCT6)
* @Explain     : None
*=============================================================================*/ 

/* 头文件包含 ----------------------------------------------------------------*/
#include "App_Selectmod.h"  
#include "App_SmallCar.h"
 
/* 私有宏定义 ----------------------------------------------------------------*/

/* 私有（静态）函数声明 ------------------------------------------------------*/

/* 全局变量定义 --------------------------------------------------------------*/
 
/* 全局变量声明 --------------------------------------------------------------*/
  
/* 全局函数编写 --------------------------------------------------------------*/
/**----------------------------------------------------------------------------
* @FunctionName  : Test()     
* @Description   : None 
* @Data          : 2016/8/8
* @Explain       : None
------------------------------------------------------------------------------*/

	
unsigned int Selectmod_Main(void)
{
//	u16 i = 0; 
//	u16 leftAD,rightAD;
//	u8 BitNum[7] = {0};			

		
	return 0;
}

unsigned int Selectmod_Start(void)
{
	SmallCar_Init();   
//	Selectmod_Main();
	
	return 0;
  
}
/*
 //	static		
						
 Type_AppList App_Selectmod = {Selectmod_Main,NULL,Selectmod_Start,NULL, \
						OS_STATE_ONE_OFF,OS_THREAD_PRIMARY, \
						(u8*)"Selectmod",100};			
	*/															
																				
/*******************************(C) COPYRIGHT 2016 Wind（谢玉伸）*********************************/




