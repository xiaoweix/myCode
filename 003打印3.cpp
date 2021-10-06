#include<stdio.h>
int main()
{
	int num,i,j,k;
	scanf("%d",&num);
	for(i=1;i<=num;i++)//控制打印多少行 
	{
		printf("这是%d行",i); 
		for(k=num-i;k>0;k--)//控制每一行打印的空格 
		{
			printf(" ");	
		}
		for(j=i*2-1;j>0;j--)//控制每一行打印多少个* 
		{
			printf("*");	
		}
		printf("\n");	
	}
	return 0;
}
