#include <stdio.h>
int main()
{
	int a;
	int b;
	scanf("%d",&a);
	for(b=1;b<=a-2;b+=2){
		printf("%d ",b);
	}
	printf("%d",b) ;
	return 0;
 } 
