#include<stdio.h>
int main()
{
	int num1,num2;
	printf("��������������");
	scanf("%d %d",&num1,&num2);
	if(num2!=0)     //�ڴ�����ǰ�治Ҫ��ֺ� 
	{
		int num3=num1/num2;
		printf("%d / %d = %d\n",num1,num2,num3); 
	}
	else  //����..����  ǧ��ע�� ���治�ܴ򣨣� 
	{
		printf("�����������0��\n");
	}
	return 0;
} 
