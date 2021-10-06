#include<stdio.h>
/*
	scanf("%s");的运用 
*/
int main()
{
	char zf[100000];
	char zf2[10000]; 
	scanf("%s",zf);//scanf()以空格和回车作为结束符 
	scanf("%s",zf2);//scanf()以空格和回车作为结束符 
	printf("%s",zf); 
	printf("\n这是第二个字符串%s",zf2); 
	return 0;
 }
