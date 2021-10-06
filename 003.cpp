#include<stdio.h>
int main()
{
	int num1=92;//整数变量 
	int num2=2;
	int num3=num1+num2; 
	float xs1=1.5;
	float xs2=2.5;
	float xs3=xs1+xs2;
	printf("%d+%d=%d\n",num1,num2,num3);//整数输出用%d
	printf("%.2f+%f=%f",xs1,xs2,xs3); //小数用%f 
	//%.2f表示保留两位小数 
	return 0;
} 

