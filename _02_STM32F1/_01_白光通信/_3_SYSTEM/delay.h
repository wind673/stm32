#ifndef __DELAY_H
#define __DELAY_H 			   
#include "sys.h"  


#define DelayUs delay_us
#define DelayMs delay_ms
#define DelayS  delay_s











void delay_init(void);
void delay_ms(u16 nms);
void delay_us(u32 nus);
void delay_s(u16 ns);//��ʱ��
	


#endif





























