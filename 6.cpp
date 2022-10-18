#include <stdio.h>
#include <math.h>
int main()
{
	int a=0;
	int unknown=0;
	int c=0;
	int d=0;
	int strange=0;
	scanf("%d",&a);
	do{
		unknown++;
		d=unknown%2;
		c=a%2;
		if(c==d){
		strange=strange+pow(2,unknown-1);
	    }
		a/=10;
		
	}while(a!=0);
	printf("%d",strange);
 } 
