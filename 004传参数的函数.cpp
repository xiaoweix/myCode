#include<stdio.h>
#include<windows.h> 
//������Զ��庯��
//��void ��ʾ����һ���Լ��ĺ��� 
void igtime(int a) //�Լ��ĺ��� �����������ʾ���Ǵ���ȥ�Ĳ��� 
{
	printf("��%d��IGţ��\n",a);
	printf("******************\n");
	printf("**    IG  ����  **\n");
	printf("**    lpl ����  **\n");
	printf("******************\n\n");
} 
int main()
{	
	int i;
	printf("");
	igtime(10); //�Լ����ú���
	Sleep(1000);
	igtime(66); //�Լ����ú���
	igtime(666); //�Լ����ú���
	return 0;
} 
