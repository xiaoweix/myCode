#include<stdio.h>
int main()
{
	int num,i,j;
	scanf("%d",&num);
	for(i=1;i<=num;i++)//���ƴ�ӡ������ 
	{
		printf("����%d��",i); 
		for(j=i*2-1;j>0;j--)//����ÿһ�д�ӡ���ٸ�* 
		{
			printf("*");	
		}
		printf("\n");	
	}
	return 0;
}
