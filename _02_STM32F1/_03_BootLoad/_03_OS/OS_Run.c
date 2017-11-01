/*******************************(C) COPYRIGHT 2016 Wind��л���죩*********************************/
/**============================================================================
* @FileName    : OS_Run.c
* @Description : None
* @Date        : 2016/3/15
* @By          : Wind��л���죩
* @Email       : 1659567673@ qq.com
* @Platform    : Keil uVision5 v5.15 (TM4C1294NCPDT)
* @Explain     : None
*=============================================================================*/

/* ͷ�ļ����� ----------------------------------------------------------------*/
#include "OS_Run.h"
#include "OS_StartFile.h"
#include "OS_Manage.h"

/* ˽�к궨�� ----------------------------------------------------------------*/
											
/* ˽�У���̬���������� ------------------------------------------------------*/
										
/* ȫ�ֱ������� --------------------------------------------------------------*/

/* ȫ�ֺ�����д --------------------------------------------------------------*/	
 
/**----------------------------------------------------------------------------
* @FunctionName  : OSThread_Free()     
* @Description   : None 
* @Data          : 2016/3/15
* @Explain       : �����߳�
------------------------------------------------------------------------------*/
void OSThread_Free(void)
{ 
 	Type_AppList *AppRun = &AppHead;  
	 
	while(1)
	{   
		if(OS_Msg & OS_BREAK) continue;
		if(AppRun ->next == NULL) AppRun = &AppHead;  
		else 
		{
			AppRun = AppRun ->next;   		
			if(AppRun ->thread != OS_THREAD_FREE) continue; 
			if(AppRun ->loading != 0 )  AppRun ->loading --;
			if(AppRun ->loading == 0 ) 
			{ 
			 
				if(AppRun ->state == OS_STATE_SUSPEND) //����
				{ 
					if(AppRun ->AppEnd != NULL) AppRun ->AppEnd();  
					AppRun ->state = OS_STATE_SUSPEND_ON; 	
					AppRun ->loading = AppRun ->reload;		
				}
				else if(AppRun ->state == OS_STATE_SUSPEND_ON)//�����Ѿ�����ĺ�̨����
				{
					if(AppRun ->AppBack != NULL) AppRun ->AppBack();//���к�̨����
					AppRun ->loading = AppRun ->reload;	
				}	
				else if(AppRun ->state == OS_STATE_ACTIVE) //����   
				{ 
					if(AppRun ->AppStart != NULL) AppRun ->AppStart(); //������������  
					AppRun ->state = OS_STATE_ACTIVE_ON; 	
					AppRun ->loading = AppRun ->reload;	
				}					
				else if(AppRun ->state == OS_STATE_ONE_OFF) //һ���Եĳ���  
				{ 				
					if(AppRun ->AppMain != NULL) AppRun ->AppMain(); //����һ��������  
					AppRun ->state = OS_STATE_CLOSE_ON;  
					AppRun ->loading = AppRun ->reload;	 
				} 
				else if(AppRun ->state == OS_STATE_CLOSE)
				{ 
					if(AppRun ->AppEnd != NULL) AppRun ->AppEnd(); 	//���н�������
					AppRun ->state = OS_STATE_CLOSE_ON;
					AppRun ->loading = AppRun ->reload;	
				}
				else if(AppRun ->state == OS_STATE_ACTIVE_ON)//�����Ѿ������������
				{
					if(AppRun ->AppMain != NULL) AppRun ->AppMain(); 
					AppRun ->loading = AppRun ->reload;	
				}	
				 
			} 
			 
		} 
		  
	} 
}



  
/**----------------------------------------------------------------------------
* @FunctionName  : OSThread_4()     
* @Description   : None 
* @Data          : 2016/3/19
* @Explain       : ϵͳ�̣߳��߳�4��
------------------------------------------------------------------------------*/
void OSThread_4(void)
{
	Type_AppList *AppRun = &AppHead;   
	while(1)
	{	
		if(AppRun ->next == NULL) return; 
		
		AppRun = AppRun ->next; 
		
		if(AppRun ->thread != OS_THREAD_4) continue; 
		
		if(AppRun ->loading != 0) AppRun ->loading --;     
		else
		{ 
			
			if(AppRun ->state == OS_STATE_SUSPEND) //����
			{ 
				if(AppRun ->AppEnd != NULL) AppRun ->AppEnd(); 
				AppRun ->state = OS_STATE_SUSPEND_ON; 	
				AppRun ->loading = AppRun ->reload;	
			}
			else if(AppRun ->state == OS_STATE_SUSPEND_ON)//�����Ѿ�����ĺ�̨����
			{
				if(AppRun ->AppBack != NULL) AppRun ->AppBack();//���к�̨����
				AppRun ->loading = AppRun ->reload;	
			}	
			else if(AppRun ->state == OS_STATE_ACTIVE) //����   
			{ 
				if(AppRun ->AppStart != NULL) AppRun ->AppStart(); //������������  
				AppRun ->state = OS_STATE_ACTIVE_ON; 	
				AppRun ->loading = AppRun ->reload;	
			}					
			else if(AppRun ->state == OS_STATE_ONE_OFF) //һ���Եĳ���  
			{ 				
				if(AppRun ->AppMain != NULL) AppRun ->AppMain(); //����һ�����������   
				AppRun ->state = OS_STATE_CLOSE_ON;  
				AppRun ->loading = AppRun ->reload;	
			} 
			else if(AppRun ->state == OS_STATE_CLOSE)
			{ 
				if(AppRun ->AppEnd != NULL) AppRun ->AppEnd(); 	//���н�������
				AppRun ->state = OS_STATE_CLOSE_ON;
				AppRun ->loading = AppRun ->reload;	
			}
			else if(AppRun ->state == OS_STATE_ACTIVE_ON)//�����Ѿ������������
			{
				if(AppRun ->AppMain != NULL) AppRun ->AppMain(); 
				AppRun ->loading = AppRun ->reload;	
			}		
						 					
		}
			   
	} 
	
}


 
/**----------------------------------------------------------------------------
* @FunctionName  : OSThread_5()     
* @Description   : None 
* @Data          : 2016/4/19
* @Explain       : �߳�5������ϵͳ�߳� �������̣߳�
------------------------------------------------------------------------------*/
void OSThread_5(void)
{
	Type_AppList *AppRun = &AppHead;   
	while(1)
	{	
		if(AppRun ->next == NULL) return; 
		
		AppRun = AppRun ->next; 
		
		if(AppRun ->thread != OS_THREAD_5) continue; 
		
		if(AppRun ->loading != 0) AppRun ->loading --;     
		else
		{ 
			if(AppRun ->state == OS_STATE_SUSPEND) //����
			{ 
				if(AppRun ->AppEnd != NULL) AppRun ->AppEnd(); 
				AppRun ->state = OS_STATE_SUSPEND_ON; 	
				AppRun ->loading = AppRun ->reload;	
			}
			else if(AppRun ->state == OS_STATE_SUSPEND_ON)//�����Ѿ�����ĺ�̨����
			{
				if(AppRun ->AppBack != NULL) AppRun ->AppBack();//���к�̨����
				AppRun ->loading = AppRun ->reload;	
			}	
			else if(AppRun ->state == OS_STATE_ACTIVE) //����   
			{ 
				if(AppRun ->AppStart != NULL) AppRun ->AppStart(); //������������  
				AppRun ->state = OS_STATE_ACTIVE_ON; 	
				AppRun ->loading = AppRun ->reload;	
			}					
			else if(AppRun ->state == OS_STATE_ONE_OFF) //һ���Եĳ���  
			{ 				
				if(AppRun ->AppMain != NULL) AppRun ->AppMain(); //����һ�����������   
				AppRun ->state = OS_STATE_CLOSE_ON;  
				AppRun ->loading = AppRun ->reload;	
			} 
			else if(AppRun ->state == OS_STATE_CLOSE)
			{ 
				if(AppRun ->AppEnd != NULL) AppRun ->AppEnd(); 	//���н�������
				AppRun ->state = OS_STATE_CLOSE_ON;
				AppRun ->loading = AppRun ->reload;	
			}
			else if(AppRun ->state == OS_STATE_ACTIVE_ON)//�����Ѿ������������
			{
				if(AppRun ->AppMain != NULL) AppRun ->AppMain(); 
				AppRun ->loading = AppRun ->reload;	
			}		
						 		
		}
			   
	} 
	
}








/**----------------------------------------------------------------------------
* @FunctionName  : OSThread_6()     
* @Description   : None 
* @Data          : 2016/3/15
* @Explain       : ���̣߳��߳�6��
------------------------------------------------------------------------------*/
void OSThread_6(void)
{   
	Type_AppList *AppRun = &AppHead;   
	if(OS_Msg & OS_BREAK) return;
	
	while(1)
	{	
		if(AppRun ->next == NULL) return; 
		
		AppRun = AppRun ->next; 
		
		if(AppRun ->thread != OS_THREAD_6) continue; 
		
		if(AppRun ->loading != 0) AppRun ->loading --;   
		else 
		{ 
			
			if(AppRun ->state == OS_STATE_SUSPEND) //����
			{ 
				if(AppRun ->AppEnd != NULL) AppRun ->AppEnd(); 
				AppRun ->state = OS_STATE_SUSPEND_ON; 	
				AppRun ->loading = AppRun ->reload;	
			}
			else if(AppRun ->state == OS_STATE_SUSPEND_ON)//�����Ѿ�����ĺ�̨����
			{
				if(AppRun ->AppBack != NULL) AppRun ->AppBack();//���к�̨����
				AppRun ->loading = AppRun ->reload;	
			}	
			else if(AppRun ->state == OS_STATE_ACTIVE) //����   
			{ 
				if(AppRun ->AppStart != NULL) AppRun ->AppStart(); //������������  
				AppRun ->state = OS_STATE_ACTIVE_ON; 	
				AppRun ->loading = AppRun ->reload;	
			}					
			else if(AppRun ->state == OS_STATE_ONE_OFF) //һ���Եĳ���  
			{ 				
				if(AppRun ->AppMain != NULL) AppRun ->AppMain(); //����һ�����������   	
				AppRun ->state = OS_STATE_CLOSE_ON;  	
				AppRun ->loading = AppRun ->reload;	
			} 
			else if(AppRun ->state == OS_STATE_CLOSE)	
			{ 
				if(AppRun ->AppEnd != NULL) AppRun ->AppEnd(); 	//���н�������	
				AppRun ->state = OS_STATE_CLOSE_ON;	
				AppRun ->loading = AppRun ->reload;	
			}	
			else if(AppRun ->state == OS_STATE_ACTIVE_ON)//�����Ѿ������������		
			{
				if(AppRun ->AppMain != NULL) AppRun ->AppMain(); 	
				AppRun ->loading = AppRun ->reload;					
			}
			 							
		}
			   
	} 
	
}


 
/**----------------------------------------------------------------------------
* @FunctionName  : OSThread_7()     
* @Description   : None 
* @Data          : 2016/4/19
* @Explain       : �߳�3������ϵͳ�̣߳�
------------------------------------------------------------------------------*/
void OSThread_7(void)
{
	Type_AppList *AppRun = &AppHead;   
	while(1)
	{	
		if(AppRun ->next == NULL) return; 
		
		AppRun = AppRun ->next; 
		
		if(AppRun ->thread != OS_THREAD_7) continue; 
		
		if(AppRun ->loading != 0) AppRun ->loading --;     
		else
		{ 
			if(AppRun ->state == OS_STATE_SUSPEND) //����
			{ 
				if(AppRun ->AppEnd != NULL) AppRun ->AppEnd(); 
				AppRun ->state = OS_STATE_SUSPEND_ON; 	
				AppRun ->loading = AppRun ->reload;	
			}
			else if(AppRun ->state == OS_STATE_SUSPEND_ON)//�����Ѿ�����ĺ�̨����
			{
				if(AppRun ->AppBack != NULL) AppRun ->AppBack();//���к�̨����
				AppRun ->loading = AppRun ->reload;	
			}	
			else if(AppRun ->state == OS_STATE_ACTIVE) //����   
			{ 
				if(AppRun ->AppStart != NULL) AppRun ->AppStart(); //������������  
				AppRun ->state = OS_STATE_ACTIVE_ON; 	
				AppRun ->loading = AppRun ->reload;	
			}					
			else if(AppRun ->state == OS_STATE_ONE_OFF) //һ���Եĳ���  
			{ 				
				if(AppRun ->AppMain != NULL) AppRun ->AppMain(); //����һ�����������   
				AppRun ->state = OS_STATE_CLOSE_ON;  
				AppRun ->loading = AppRun ->reload;	
			} 
			else if(AppRun ->state == OS_STATE_CLOSE)
			{ 
				if(AppRun ->AppEnd != NULL) AppRun ->AppEnd(); 	//���н�������
				AppRun ->state = OS_STATE_CLOSE_ON;
				AppRun ->loading = AppRun ->reload;	
			}
			else if(AppRun ->state == OS_STATE_ACTIVE_ON)//�����Ѿ������������
			{
				if(AppRun ->AppMain != NULL) AppRun ->AppMain(); 
				AppRun ->loading = AppRun ->reload;	
			}		
						 					
		}
			   
	} 
	
}







/*******************************(C) COPYRIGHT 2016 Wind��л���죩*********************************/




