#include<stdio.h>
int main()
{
	int num,i,j,k;
	scanf("%d",&num);
	for(i=1;i<=num;i++)//���ƴ�ӡ������ 
	{
		printf("����%d��",i); 
		for(k=num-i;k>0;k--)//����ÿһ�д�ӡ�Ŀո� 
		{
			printf(" ");	
		}
		for(j=i*2-1;j>0;j--)//����ÿһ�д�ӡ���ٸ�* 
		{
			printf("*");	
		}
		printf("\n");	
	}
	return 0;
}
