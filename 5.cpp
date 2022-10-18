
#include <stdio.h> 
int main()
{
	int a=0;
	int numj=0;
	int numo=0;
	scanf("%d",&a);
	while(a!=-1){
		if(a%2==1){
			numj++;
		}else{
			numo++;
			
		}
		scanf("%d",&a);
	}
	printf("%d %d",numj,numo);
	return 0;
}
