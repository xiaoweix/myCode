#include<stdio.h>
int main()
{
	float num1,num2;
	num1=1;//��ʾ��1��ֵ��num1�� 
	printf("��������������");
	scanf("%f %f",&num1,&num2);
	if(num2==0)     //�ڴ�����ǰ�治Ҫ��ֺ� 
	{
		printf("�����������0��\n");
	}
	else  //����..����  ǧ��ע�� ���治�ܴ򣨣� 
	{
		float num3=num1/num2;
		printf("%.2f / %.2f = %.2f\n",num1,num2,num3); 
	}
	return 0;
} 
