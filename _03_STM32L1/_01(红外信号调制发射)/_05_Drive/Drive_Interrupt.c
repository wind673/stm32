/*******************************(C) COPYRIGHT 2017 Wind（谢玉伸）*********************************/
/**============================================================================
* @FileName    : Drive_Interrupt.c
* @Description : 中断服务
* @Date        : 2016/8/8
* @By          : Wind（谢玉伸）
* @Email       : 1659567673@qq.com
* @Platform    : Keil uVision5 v5.20 (STM32L151CB)
* @Explain     : None
*=============================================================================*/

/* 头文件包含 ----------------------------------------------------------------*/
#include "Drive_Interrupt.h"

/* 私有宏定义 ----------------------------------------------------------------*/

/* 私有（静态）函数声明 ------------------------------------------------------*/

/* 全局变量定义 --------------------------------------------------------------*/


/* 全局函数编写 --------------------------------------------------------------*/
/**----------------------------------------------------------------------------
* @FunctionName  : TIM2_IRQHandler()
* @Description   : 定时器服务函数
* @Data          : 2016/8/8
* @Explain       : 用于时钟
-------------------------------------------------------------------------------
None
------------------------------------------------------------------------------*/
void TIM2_IRQHandler(void)
{ 
    TIM_ClearITPendingBit(TIM2, TIM_IT_Update); //清除TIMx更新中断标志
    OS_TimeOver_Cnt ++; 
}



/**----------------------------------------------------------------------------
* @FunctionName  : TIM3_IRQHandler()
* @Description   : 定时器服务函数
* @Data          : 2016/8/8
* @Explain       : 用于系统线程
-------------------------------------------------------------------------------
None
------------------------------------------------------------------------------*/
void TIM6_IRQHandler(void)
{
    TIM_ClearITPendingBit(TIM6, TIM_IT_Update); //清除TIMx更新中断标志
    OSThread_5();
	
}


/**----------------------------------------------------------------------------
* @FunctionName  : TIM4_IRQHandler()
* @Description   : 定时器服务函数
* @Data          : 2016/8/8
* @Explain       : 用于主线程
-------------------------------------------------------------------------------
None
------------------------------------------------------------------------------*/
void TIM4_IRQHandler(void)
{
    TIM_ClearITPendingBit(TIM4, TIM_IT_Update); //清除TIMx更新中断标志
    OSThread_8();
}




/**----------------------------------------------------------------------------
* @FunctionName  : TIM7_IRQHandler()
* @Description   : 定时器服务函数
* @Data          : 2016/8/8
* @Explain       : None
-------------------------------------------------------------------------------
None
------------------------------------------------------------------------------*/
void TIM7_IRQHandler(void)
{
    TIM_ClearITPendingBit(TIM7, TIM_IT_Update); //清除TIMx更新中断标志
	Infrared_TimeCodeSend_Handle();//红外发送
}
 

/**----------------------------------------------------------------------------
* @FunctionName  : EXTI4_IRQHandler()
* @Description   : 外部中断服务函数
* @Data          : 2016/8/8
* @Explain       : None
-------------------------------------------------------------------------------
None
------------------------------------------------------------------------------*/
void EXTI4_IRQHandler(void)
{
    if(EXTI_GetITStatus(EXTI_Line4) != RESET)
    {	 
		
        EXTI_ClearITPendingBit(EXTI_Line4);	
    }	
	
	
}



/**----------------------------------------------------------------------------
* @FunctionName  : USART1_IRQHandler()
* @Description   : 串口中断服务函数
* @Data          : 2016/8/8
* @Explain       : None
-------------------------------------------------------------------------------
None
------------------------------------------------------------------------------*/
void USART1_IRQHandler()
{
	
	
}




/*******************************(C) COPYRIGHT 2017 Wind（谢玉伸）*********************************/





