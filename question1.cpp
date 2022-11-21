#include <stdio.h>
//我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。
//
//现在，给定两个整数n和m，0<n<=m<=200，你的程序要计算第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。
//

int main(){
	int m,n;
	int t=2;
	int j=0;
	int i=2;
	int sum=0;
	scanf("%d%d",&n,&m);
	for(t=2;j<m;t++){
		for(i=2;t%i!=0;i++){
			
		}
		if(i==t){
			
		j++;
		if(j>=n){
		
			sum+=i;
		}
	}
	}
	printf("%d",sum);
	return 0;
}
