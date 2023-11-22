#include <REGX52.H>
#include "delay.h"
#include "lcd1602.h"

void main()
{
	LCD_Init();
	while(1)
	{
		if(P3_1==1)
		{
		Delay(20);
		while(P3_1==1);
		Delay(20);
		LCD_ShowString(1,1,"SYH");	
		}	
		if(P3_0==1)
		{
		Delay(20);
		while(P3_0==1);
		Delay(20);
		LCD_ShowNum(2,1,23020,5);
		LCD_ShowNum(2,6,5029,4);
		}
		if(P3_2==1)
		{
		Delay(20);
		while(P3_2==1);
		Delay(20);
		LCD_Init();
		}	
	}
}