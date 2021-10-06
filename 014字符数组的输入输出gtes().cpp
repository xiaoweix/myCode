#include<stdio.h>
/*
	scanf("%s");的运用 
*/
int main()
{
	char zf[100000];
	char zf2[10000]; 
	gets(zf);//gets()不会以空格为结束 以回车为结束符号 
	puts(zf);
	printf("\n这是第1个字符串%s",zf); 
	return 0;
 }
