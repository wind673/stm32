/*******************************(C) COPYRIGHT 2017 Wind��л���죩*********************************/
/**============================================================================
* @FileName    : App_Test.c
* @Description : None
* @Date        : 2017/2/16
* @By          : Wind��л���죩
* @Email       : 1659567673@ qq.com
* @Platform    : Keil uVision5 v5.15 (STM32F407ZG)
* @Explain     : None
*=============================================================================*/

/* ͷ�ļ����� ----------------------------------------------------------------*/
#include "App_Test.h"  
 
/* ˽�к궨�� ----------------------------------------------------------------*/
 
/* ˽�У���̬���������� ------------------------------------------------------*/

/* ȫ�ֱ������� --------------------------------------------------------------*/  

/* ȫ�ֱ������� --------------------------------------------------------------*/ 

/* ȫ�ֺ�����д --------------------------------------------------------------*/
/**----------------------------------------------------------------------------
* @FunctionName  : App_Test()     
* @Description   : None 
* @Data          : 2016/3/15
* @Explain       : None
------------------------------------------------------------------------------*/
void Test(void *p_arg)		
{    
	p_arg = p_arg;
	
	while(1)
	{  
		GUI_TOUCH_Exec(); 	
		delay_ms(5);
		
	}
	 
}	

/* App ע�� -----------------------------*/ 
#define  APP_STK_SIZE 		128  //�����ջ��С	
static OS_TCB	 APP_TaskTCB;
static CPU_STK	 APP_STK[APP_STK_SIZE]; 

OS_Struct App_Test =
{
	Test, "Test", 4,
	&APP_TaskTCB, APP_STK,
	APP_STK_SIZE, APP_STK_SIZE/10,
	0,0,NULL,NULL,OS_OPT_TASK_STK_CHK|OS_OPT_TASK_STK_CLR 
};

 														
																				
/*******************************(C) COPYRIGHT 2017 Wind��л���죩*********************************/




