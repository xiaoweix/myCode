#include<stdio.h> 
int fabsi(int num)//int ����ֵ���Զ��庯�� ��int���� 
{				//�������洫��ȥ�Ĳ�����int ���͵� 
	int temp=num<0?num=0-num:num;
	return temp; //����ֵ ������������
				//���ص����ͱ�������涨�庯��������һ�� 
}
//����һ��float����ֵ��float�������Զ��庯�� 
float fabsf(float num)//float����ֵ���Զ��庯�� ��float����
{					//�������洫��ȥ�Ĳ�����float ���͵� 
	float temp=num<0?num=0-num:num;
	return temp; //����ֵ ������������
				//���ص����ͱ�������涨�庯��������һ�� 
}	
int main()
{
	int a=fabsi(-5);//�����ĵ��� ����ͬ���͵ı������ܺ����ķ���ֵ 
	printf("----%d---\n",a);
	
	float f=fabsf(-5.5);//�����ĵ��� ����ͬ���͵ı������ܺ����ķ���ֵ 
	printf("%f",f);
	return 0;
}
