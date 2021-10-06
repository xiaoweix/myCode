/*
  打印1-100里面的非3的倍数的数字， 
*/
#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<1000;i++)
	{
		if(i%3==0)
		{
			continue;//继续，只要一执行
			//跳过本次循环 ，执行下一次循环 
		}
		printf("%d ",i);	
	} 
	return 0;
}
