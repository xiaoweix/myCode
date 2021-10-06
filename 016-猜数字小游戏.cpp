#include<stdio.h>
int main()
{
	int guess; 
	int num =27; 
	int times=3; //循环变量 
	while(times>0)//当i<52的时候  就执行大括号里面的循环 
	{
		printf("请输入1~100里面的一个数字  ");
		scanf("%d",&guess);
		if(guess>num)
		{
			printf("大了大了\n");	
		} 
		else if(guess<num)
		{
			printf("小了小了\n");	
		}
		else
		{
			printf("猜中啦"); 
			break; 
		} 
		times = times -1;
		printf("你还有%d次机会\n",times);	
	}
	return 0;
} 
