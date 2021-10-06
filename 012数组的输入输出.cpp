#include<stdio.h>
/*
	int/float/double数组的输入只能通过这一种方式输入 
*/
int main()
{
	float sz[10000]; 
	int X;
	scanf("%d",&X); 
	float sum=0; 
	for(int i=0;i<X;i++)
	{
		printf("输入第%d个数字\n",i);
		scanf("%f",&sz[i]);
		sum+=sz[i];
	}
	for(int i=0;i<X;i++) 
		printf("第%d个数字%.2f ",i,sz[i]);
	printf("%.2f",sum);
	return 0;
 }
