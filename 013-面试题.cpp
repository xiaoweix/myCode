#include<stdio.h>
int strlen1(char* C)
{
	int len=0;
	char* p = C;
	while(*(p++)!='\0')
		len++;
	return len;
}
void strcpy(char* A,char* B)
{
	char* pA=A;
	char* pB=B;
	for(int i=0;i<strlen1(A);i++)
		*(pB++)=*(pA++);
	
}
int main()
{
	char a[100]="123456";
	char b[100];
	strcpy(a,b);
	printf("aµÄ³¤¶È%d\n",strlen1(a)); 
	puts(b);	
	
}
