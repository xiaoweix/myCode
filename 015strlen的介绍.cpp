#include<stdio.h>
#include<string.h> 
int main()
{
	char zf[100000];
	gets(zf);//gets()�����Կո�Ϊ���� �Իس�Ϊ�������� 
	int len=strlen(zf); //��������������Ǽ����ַ����ĳ��� 
	printf("\n���ǵ�1���ַ���\n%s\n���ĳ���Ϊ��%d",zf,len); 
	
	printf("\n�������Ϊ��\n");
	int i;
	for(i=len-1;i>=0;i--)
		printf("%c",zf[i]); 
	return 0;
 }
