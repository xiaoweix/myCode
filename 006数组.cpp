#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x;

	
	int num[10];
	printf("%d",sizeof(num)); 
	
	scanf("%d",&x);
	int* num2;
	num2 = (int*)malloc(x*sizeof(int));
	//�����ڴ� ���ź�Ϊ�ڴ��С 
	//������õ��ڴ�ĵ�ַ ���ظ����ָ�� 
	// int num2[10]�Ļ���ԭ�� 
	for(int i=0;i<x;i++)
		scanf("%d",&num2[i]); 
	for(int i=0;i<x;i++)
		printf("%d ",num2[i]); 
	return 0;
}
