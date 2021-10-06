#include<stdio.h>
int main()
{
	float num1,num2;
	num1=1;//表示把1赋值给num1； 
	printf("请输入两个数：");
	scanf("%f %f",&num1,&num2);
	if(num2==0)     //在大括号前面不要打分号 
	{
		printf("输入除数的是0！\n");
	}
	else  //否则..样。  千万注意 后面不能打（） 
	{
		float num3=num1/num2;
		printf("%.2f / %.2f = %.2f\n",num1,num2,num3); 
	}
	return 0;
} 
