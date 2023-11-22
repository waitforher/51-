#include <REGX52.H>
#include "delay.h"
#include "nixie.h"


void main()
{
	int a,b,c,d,e,f,g,h;
	a=7,b=2,c=9,d=0,e=4,f=0,g=0,h=2;
	while(1)
	{
		Nixie(1,h);
		Nixie(2,g);
		Nixie(3,f);
		Nixie(4,e);
		Nixie(5,d);
		Nixie(6,c);
		Nixie(7,b);
		Nixie(8,a);
		if((P3_0==0&&P3_1==0)||(P3_0==0&&P3_3==0))    //k1k2加 右k2k4加
			{
				Delay(20);
				while((P3_0==0&&P3_1==0)||(P3_0==0&&P3_3==0));
				Delay(20);
				a++;
			}
			if(a>9)
			{
				a=0;
				b++;
			}	
			else if(b>9)
			{
				b=0;
				c++;
			}				
			else if(c>9)
			{
				c=0;
				d++;
			}	
			else if(d>9)
			{
				d=0;
				e++;
			}	
			else if(e>9)
			{
				e=0;
				f++;
			}	
			else if(f>9)
			{
				f=0;
				g++;
			}	
			else if(g>9)
			{
				g=0;
				h++;
			}	
			else if(h>9)
			{
				h=0;
			}	

			
		if(P3_2==0&&P3_3==0)     //k3k4减
		
			{
				Delay(20);
				while(P3_2==0&&P3_3==0);
				Delay(20);
				a--;
			}
			else if(a<0)
			{
				a=9;
				b--;
			}	
			else if(b<0)
			{
				b=9;
				c--;
			}				
			else if(c<0)
			{
				c=9;
				d--;
			}	
			else if(d<0)
			{
				d=9;
				e--;
			}	
			else if(e<0)
			{
				e=9;
				f--;
			}	
			else if(f<0)
			{
				f=9;
				g--;
			}	
			else if(g<0)
			{
				g=9;
				h--;
			}	
			else if(h<0)
			{
				h=0;
			}	
		

		//k1k2和k3k4结束
		
		if(P3_1==0&&P3_2==0)  //左k1k3加
			{
				Delay(20);
				while(P3_1==0&&P3_2==0);
				Delay(20);
				e++;
			}
			if(e>9)
			{
				e=0;
				f++;
			}	
			else if(f>9)
			{
				f=0;
				g++;
			}	
			else if(g>9)
			{
				g=0;
				h++;
			}	
			else if(h>9)
			{
				h=0;
			}	
		
			
			
		if(P3_1==0&&P3_3==0)   //k1k4左减
			{
				Delay(20);
				while(P3_1==0&&P3_3==0);
				Delay(20);
				e--;
			}
			if(e<0)
			{
				e=9;
				f--;
			}	
			else if(f<0)
			{
				f=9;
				g--;
			}	
			else if(g<0)
			{
				g=9;
				h--;
			}	
			else if(h<0)
			{
				h=0;
			}	
	}
}