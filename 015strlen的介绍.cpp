#include<stdio.h>
#include<string.h> 
int main()
{
	char zf[100000];
	gets(zf);//gets()不会以空格为结束 以回车为结束符号 
	int len=strlen(zf); //这个函数的作用是计算字符串的长度 
	printf("\n这是第1个字符串\n%s\n它的长度为：%d",zf,len); 
	
	printf("\n逆序输出为：\n");
	int i;
	for(i=len-1;i>=0;i--)
		printf("%c",zf[i]); 
	return 0;
 }
