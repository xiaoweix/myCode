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
	for(i=0;i<num;i++)//���ƴ�ӡ������ 
	{
		for(j=0;j<num;j++)//����ÿһ�д�ӡ���ٸ�* 
		{
			printf("* ");	
		}
		printf("\n");	
	}
	return 0;
}
