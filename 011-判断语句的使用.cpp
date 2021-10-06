#include<stdio.h>
int main()
{
	int num1,num2;
	printf("请输入两个数：");
	scanf("%d %d",&num1,&num2);
	if(num2!=0)     //在大括号前面不要打分号 
	{
		int num3=num1/num2;
		printf("%d / %d = %d\n",num1,num2,num3); 
	}
	else  //否则..样。  千万注意 后面不能打（） 
	{
		printf("输入除数的是0！\n");
	}
	return 0;
} 
