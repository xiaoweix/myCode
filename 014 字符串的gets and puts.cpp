#include<stdio.h>
#include<string.h>//ʹ��strlen()���������ͷ�ļ� 
int main()
{
	char shuz[100]; 
	gets(shuz);//����һ���ַ���
	int num=strlen(shuz);
	printf("����ĳ���Ϊ��%d\n",num);
	printf("printf���Ϊ��%s\n",shuz);
	puts(shuz);//����ַ��� 
	
	///scanf() �����ո�ͻس��ͽ�������
	//gets() �����س��Ż�������� 
	return 0; 
}
