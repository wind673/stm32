/*******************************(C) COPYRIGHT 2017 Wind(谢玉伸) *********************************/
/**============================================================================
* @FileName    : Drive_FreqMeasure.c
* @Description : None
* @Date        : 2017年7月26日
* @By          : Wind(谢玉伸)
* @Email       : 1659567673@qq.com
* @Platform    : Keil uVision5 v5.15 (STM32F407ZG)
* @Explain     : 测频率
*=============================================================================*/

/* 头文件包含 ----------------------------------------------------------------*/
#include "Drive_FreqMeasure.h"

/* 私有宏定义 ----------------------------------------------------------------*/
#define FREQ_PIN PEin(0)

/* 私有（静态）函数声明 ------------------------------------------------------*/

/* 全局变量定义 --------------------------------------------------------------*/
static u32 Freq_Time = 0;

/* 全局变量声明 --------------------------------------------------------------*/

/* 全局函数编写 --------------------------------------------------------------*/
/**----------------------------------------------------------------------------
* @FunctionName  : FreqMeasure_Init(void)
* @Description   : 测频率
* @Data          : 2017年7月26日
* @Explain       : None
------------------------------------------------------------------------------*/
int FreqMeasure_Init(void)
{  
	EXTI11_Init();//PB11 设定成上升沿触发
	TIM6_Init();
	 
    return 0;
}	


/**----------------------------------------------------------------------------
* @FunctionName  : FreqMeasure_IRQHandler(void)
* @Description   : 测频率中断服务函数
* @Data          : 2017年7月26日
* @Explain       : None
------------------------------------------------------------------------------*/
int FreqMeasure_IRQHandler(void)
{   
	static u32 _TimeLast = 0,_TimeOverLast = 0;     
	
	Freq_Time = TIM_GetCounter(TIM6) + (Time_12M_Over - _TimeOverLast)*0xffff - _TimeLast; 
	
	_TimeLast = TIM_GetCounter(TIM6);
	_TimeOverLast = Time_12M_Over; 
	
    return 0;
}	




/**----------------------------------------------------------------------------
* @FunctionName  : FreqMeasure_Read(void)
* @Description   : 读出所测频率
* @Data          : 2017年7月26日
* @Explain       : None
------------------------------------------------------------------------------*/
float FreqMeasure_Read(void)
{    
	float _T = 0;
	float _Freq = 0;
	 
	_T = Freq_Time/12.0f;//us
	_Freq = 1000000.0f/_T;//Hz
	
    return _Freq;
}	



/**----------------------------------------------------------------------------
* @FunctionName  : FreqMeasure_Read(void)
* @Description   : 读出所测周期 单位:us
* @Data          : 2017年7月26日
* @Explain       : None
------------------------------------------------------------------------------*/
float TMeasure_Read(void)
{    
	float _T = 0; 
	 
	_T = Freq_Time/12.0f;//us
	
    return _T;
}	



/*******************************(C) COPYRIGHT 2017 Wind(谢玉伸) *********************************/







