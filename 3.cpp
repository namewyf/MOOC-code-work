#include <stdio.h>
int main() 
{
	int UTC;
	int BJT;
	int minute; 
	int hour;
	scanf("%d",&BJT) ;
	minute=BJT%100;
	hour=BJT/100;
	if(hour<8)
	{
		hour+=16;
	}else{
		hour-=8;
	}
	printf("%d",hour*100+minute);
	
	
}
