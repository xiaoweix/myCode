/*
3
sadkasdkjash
5
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/
#include<stdio.h>
int main()
{
	int num,i,j;
	scanf("%d",&num);
	for(i=0;i<num;i++)//控制打印多少行 
	{
		for(j=0;j<num;j++)//控制每一行打印多少个* 
		{
			printf("* ");	
		}
		printf("\n");	
	}
	return 0;
}
