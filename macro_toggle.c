#include<stdio.h>
#define toggle(num,pos) num=num^(1<<pos)
int main()
{
	int num=0xab,pos=2;
        
	printf("%d ",toggle(num,pos));
	
	
}
