#include<stdio.h>
int main()
{
	char s[1000];
	gets(s);
	int len=0;
	char* p=s;
	while(*(p++)!='\0')
		len++;
	printf("�ַ����ĳ�����%d",len); 
	return 0;
}
