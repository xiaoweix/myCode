#include<stdio.h>
int main()
{
	int  a=10;
	int* p=&a;//�洢�����������ַ�� 
	printf("a=%d\n",a);
	printf("ָ��p���ֵĵ�ַ��ֵ��%d\n",*p);//ȡ��ָ���ַ�����ֵ
										//��*p 
	
	printf("a�ĵ�ַΪ��%d\n",&a);
	printf("ָ��p����ĵ�ַ%d\n",p); 
	
	//printf("ָ��p�ĵ�ַ%d\n",&p); 
	return 0;
}
