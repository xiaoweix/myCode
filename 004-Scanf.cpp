#include<stdio.h>
int main()
{
	int num1;//�������� 
	printf("������һ������");//��ʾ�� 
	scanf("%d",&num1);//scanf�������&��ȡ��ַ��
	                  //printf�����û��& 
	                  //�Ӽ��̶���һ���������浽num1�� 
	int num2;
	printf("������ڶ�������");
	scanf("%d",&num2);//�Ӽ��̶���һ���������浽num2��
	int num3=num1+num2; 
	float xs1=1.5;
	float xs2=2.5;
	float xs3=xs1+xs2;
	printf("%d+%d=%d\n",num1,num2,num3);//���������%d
	//printf("%.2f+%f=%f",xs1,xs2,xs3); //С����%f 
	//%.2f��ʾ������λС�� 
	return 0;
} 
