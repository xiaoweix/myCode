#include<stdio.h>
/*
	int/float/double���������ֻ��ͨ����һ�ַ�ʽ���� 
*/
int main()
{
	float sz[10000]; 
	int X;
	scanf("%d",&X); 
	float sum=0; 
	for(int i=0;i<X;i++)
	{
		printf("�����%d������\n",i);
		scanf("%f",&sz[i]);
		sum+=sz[i];
	}
	for(int i=0;i<X;i++) 
		printf("��%d������%.2f ",i,sz[i]);
	printf("%.2f",sum);
	return 0;
 }
