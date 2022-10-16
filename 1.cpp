#include <stdio.h>

int main()

{
	int a;
	int b;
	int c;
	int d;
	scanf("%d",&a);
	b=a/100;
	c=a%10;
	d=a/10-b*10;
	printf("%d",c*100+b+d*10);
}



 
