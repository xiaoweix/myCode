#include<stdio.h>
int main()
{
	int x;
	int num[1000];
	scanf("%d",&x);//�ж��ٸ�Ԫ�� 
	int* p=num;
	for(int i=0;i<x;i++)//��������� 
	{
		scanf("%d",p);
		p++;
	} 
	printf("*p=%d \n",*p);//��������3���� �����ָ��p�Ѿ�ָ����num��3�� 
	for(int i=0;i<x;i++)
		printf("%d ",num[i]);
	
	return 0;
	
}
