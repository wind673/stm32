/*******************************(C) COPYRIGHT 2016 Wind（谢玉伸）*********************************/
/**============================================================================
* @FileName    : Drive_ADC.c
* @Description : None
* @Date        : 2016/7/11
* @By          : Wind（谢玉伸）
* @Email       : 1659567673@ qq.com
* @Platform    : Keil uVision5 v5.15 (STM32F407ZG)
* @Explain     : None
*=============================================================================*/

/* 头文件包含 ----------------------------------------------------------------*/
#include "Drive_ADC.h" 

/* 私有宏定义 ----------------------------------------------------------------*/

/* 私有（静态）函数声明 ------------------------------------------------------*/

/* 全局变量定义 --------------------------------------------------------------*/
 

/* 全局函数编写 --------------------------------------------------------------*/
/**----------------------------------------------------------------------------
* @FunctionName  : ADC1_Init()
* @Description   : None
* @Data          : 2016/7/11
* @Explain       : None
------------------------------------------------------------------------------*/
void ADC1_Init(void)
{
    GPIO_InitTypeDef  GPIO_InitStructure;
    ADC_CommonInitTypeDef ADC_CommonInitStructure;
    ADC_InitTypeDef       ADC_InitStructure;
	
    RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);//使能GPIOA时钟
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1, ENABLE); //使能ADC1时钟
	
    //先初始化ADC1通道1 IO口
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;//PA1
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AN;//模拟输入
    GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL ;//不带上下拉
    GPIO_Init(GPIOA, &GPIO_InitStructure);//初始化
	
    RCC_APB2PeriphResetCmd(RCC_APB2Periph_ADC1, ENABLE);	//ADC1复位
    RCC_APB2PeriphResetCmd(RCC_APB2Periph_ADC1, DISABLE);	//复位结束
	
    ADC_CommonInitStructure.ADC_Mode = ADC_Mode_Independent;//独立模式
    ADC_CommonInitStructure.ADC_TwoSamplingDelay = ADC_TwoSamplingDelay_5Cycles;//两个采样阶段之间的延迟5个时钟
    ADC_CommonInitStructure.ADC_DMAAccessMode = ADC_DMAAccessMode_Disabled; //关闭DMA使能
    ADC_CommonInitStructure.ADC_Prescaler = ADC_Prescaler_Div2;//预分频2分频。//ADCCLK=PCLK2/4=84/4=21Mhz,ADC时钟最好不要超过36Mhz
    ADC_CommonInit(&ADC_CommonInitStructure);//初始化
		
    ADC_InitStructure.ADC_Resolution = ADC_Resolution_12b;//12位模式	
    ADC_InitStructure.ADC_ScanConvMode = DISABLE;//非扫描模式
    ADC_InitStructure.ADC_ContinuousConvMode = DISABLE;//关闭连续转换
    ADC_InitStructure.ADC_ExternalTrigConvEdge = ADC_ExternalTrigConvEdge_None;//禁止触发检测，使用软件触发
    ADC_InitStructure.ADC_DataAlign = ADC_DataAlign_Right;//右对齐
    ADC_InitStructure.ADC_NbrOfConversion = 1;//1个转换在规则序列中 也就是只转换规则序列1
    ADC_Init(ADC1, &ADC_InitStructure);//ADC初始化
 
    ADC_Cmd(ADC1, ENABLE);//开启AD转换器	

}

/**----------------------------------------------------------------------------
* @FunctionName  : ADC2_Init()
* @Description   : ADC2初始化程序
* @Data          : 2016/7/24
* @Explain       : 用于音频采集
------------------------------------------------------------------------------*/
void ADC2_Init(void)
{
    GPIO_InitTypeDef  GPIO_InitStructure;
    ADC_CommonInitTypeDef ADC_CommonInitStructure;
    ADC_InitTypeDef       ADC_InitStructure;
	
    RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);//使能GPIOA时钟
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC2, ENABLE); //使能ADC1时钟
	
    //先初始化ADC1通道1 IO口
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;//PA
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AN;//模拟输入
    GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL ;//不带上下拉
    GPIO_Init(GPIOA, &GPIO_InitStructure);//初始化
	
    RCC_APB2PeriphResetCmd(RCC_APB2Periph_ADC2, ENABLE);	//ADC1复位
    RCC_APB2PeriphResetCmd(RCC_APB2Periph_ADC2, DISABLE);	//复位结束
	
    ADC_CommonInitStructure.ADC_Mode = ADC_Mode_Independent;//独立模式
    ADC_CommonInitStructure.ADC_TwoSamplingDelay = ADC_TwoSamplingDelay_5Cycles;//两个采样阶段之间的延迟5个时钟
    ADC_CommonInitStructure.ADC_DMAAccessMode = ADC_DMAAccessMode_Disabled; //关闭DMA使能
    ADC_CommonInitStructure.ADC_Prescaler = ADC_Prescaler_Div2;//预分频2分频。//ADCCLK=PCLK2/4=84/4=21Mhz,ADC时钟最好不要超过36Mhz
    ADC_CommonInit(&ADC_CommonInitStructure);//初始化
		
    ADC_InitStructure.ADC_Resolution = ADC_Resolution_12b;//12位模式	
    ADC_InitStructure.ADC_ScanConvMode = DISABLE;//非扫描模式
    ADC_InitStructure.ADC_ContinuousConvMode = DISABLE;//关闭连续转换
    ADC_InitStructure.ADC_ExternalTrigConvEdge = ADC_ExternalTrigConvEdge_None;//禁止触发检测，使用软件触发
    ADC_InitStructure.ADC_DataAlign = ADC_DataAlign_Right;//右对齐
    ADC_InitStructure.ADC_NbrOfConversion = 1;//1个转换在规则序列中 也就是只转换规则序列1
    ADC_Init(ADC2, &ADC_InitStructure);//ADC初始化
 
    ADC_Cmd(ADC2, ENABLE);//开启AD转换器	

}
 
/**----------------------------------------------------------------------------
* @FunctionName  : ADC_Result_Get()
* @Description   : 获得ADC值
* @Data          : 2016/7/24
* @Explain       : 
------------------------------------------------------------------------------- 
Channel:  ADC_Channel_0~ADC_Channel_18 (填0~18也行) 
Speed  :  0~7(越小越快)
返回值:转换结果
------------------------------------------------------------------------------*/
u16 ADC_Result_Get(u8 Channel,u8 Speed)
{  
	if(Speed > 7) Speed = 7; 
	if(Channel == 1)
	{
		ADC_RegularChannelConfig(ADC1,Channel, 1, Speed );	 
		ADC_SoftwareStartConv(ADC1);		//使能指定的ADC1的软件转换启动功能 
		while(!ADC_GetFlagStatus(ADC1, ADC_FLAG_EOC ));//等待转换结束 
		return ADC_GetConversionValue(ADC1);	//返回最近一次ADC1规则组的转换结果
	}
	else if(Channel == 2)
	{
		ADC_RegularChannelConfig(ADC2,Channel, 1, Speed );	 
		ADC_SoftwareStartConv(ADC2);		//使能指定的ADC1的软件转换启动功能 
		while(!ADC_GetFlagStatus(ADC2, ADC_FLAG_EOC ));//等待转换结束 
		return ADC_GetConversionValue(ADC2);	//返回最近一次ADC1规则组的转换结果  
	}
	else if(Channel == 3)
	{
		ADC_RegularChannelConfig(ADC3,Channel, 1, Speed );	 
		ADC_SoftwareStartConv(ADC3);		//使能指定的ADC1的软件转换启动功能 
		while(!ADC_GetFlagStatus(ADC3, ADC_FLAG_EOC ));//等待转换结束 
		return ADC_GetConversionValue(ADC3);	//返回最近一次ADC1规则组的转换结果 
	}
	else return 0;
}





/**----------------------------------------------------------------------------
* @FunctionName  : Get_ADC_Average()
* @Description   : 求多次ADC采集的平均值
* @Data          : 2016/7/24
* @Explain       :
-------------------------------------------------------------------------------
获取通道ch的转换值，取times次,然后平均
Channel:通道编号
Times:获取次数
返回值:通道ch的times次转换结果平均值
------------------------------------------------------------------------------*/
u16 ADC_Average_Get(u8 Channel, u8 Times)
{
    u32 Result = 0; 
	while(Times--)
    {
        Result += ADC_Result_Get(Channel,3);
		Result/=2;
        OSdelay_ms(1);
    }
    return Result;
}




/*******************************(C) COPYRIGHT 2016 Wind（谢玉伸）*********************************/





