#include <stdio.h>
//你的程序要读入一个整数，范围是[-100000,100000]。然后，用汉语拼音将这个整数的每一位输出出来。
//
//如输入1234，则输出：
//
//yi er san si
//
//注意，每个字的拼音之间有一个空格，但是最后的字后面没有空格。当遇到负数时，在输出的开头加上“fu”，如-2341输出为：
//fu er san si yi
int main(){
	int a;
	int t,out;
	int tem=1;
	scanf("%d",&a);
	if(a<0){
		printf("fu ");
		a=-a;
	}
	t=a;
	while(a>9){
		a/=10;
		tem*=10;
	}
	do{
	
	out=t/tem;
	t%=tem;
	tem/=10;
	
	switch (out)
	{
	case 0:
	printf("ling");
	break;
	case 1:
	printf("yi");
	break;
	case 2:
	printf("er");
	break;
	case 3:
	printf("san");
	break;
	case 4:
	printf("si");
	break;
	case 5:
	printf("wu");
	break;
	case 6:
	printf("liu");
	break;
	case 7:
	printf("qi");
	break;
	case 8:
	printf("ba");
	break;
	default:
	printf("jiu");
	}
	if(tem>0){
		printf(" ");
	}
	
	}while(tem>0);
	return 0;
}



