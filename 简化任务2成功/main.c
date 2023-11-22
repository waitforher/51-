#include <REGX52.H>
#include "delay.h"

void main()
{
	while(1)
	{
		P2=0xFE;//1111 1110
		Delay(500);
		P2=0xFD;//1111 1101
		Delay(500);
		P2=0xFB;//1111 1011
		Delay(500);
		P2=0xF7;//1111 0111
		Delay(500);
		P2=0xEF;//1110 1111
		Delay(500);
		P2=0xDF;//1101 1111
		Delay(500);
		P2=0xBF;//1011 1111
		Delay(500);
		P2=0x7F;//0111 1111
		Delay(500);
		P2=0xBF;//1011 1111
		Delay(500);
		P2=0xDF;//1101 1111
		Delay(500);
		P2=0xEF;//1110 1111
		Delay(500);
		P2=0xF7;//1111 0111
		Delay(500);
		P2=0xFB;//1111 1011
		Delay(500);
		P2=0xFD;//1111 1101
		Delay(500);
		P2=0xFE;//1111 1110
		Delay(500);
		P2=0x00;//0000 0000
		Delay(1000);
	}
}
