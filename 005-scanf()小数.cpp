#include<stdio.h>
int main()
{
	float num1;//С�������� 
	printf("������һ������");//��ʾ�� 
	scanf("%f",&num1);//scanf�������&��ȡ��ַ��
	                  //printf�����û��& 
	                  //�Ӽ��̶���һ���������浽num1�� 
	float num2;
	printf("������ڶ�������");
	scanf("%f",&num2);//�Ӽ��̶���һ���������浽num2��
	float num3=num1+num2; 
	printf("%.3f+%.2f=%.3f\ n",num1,num2,num3);//���������%d
	return 0;
} 
