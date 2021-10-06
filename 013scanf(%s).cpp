/*位数反转  123   321
123456789  987654321
*/
#include<stdio.h>
#include<string.h>//使用strlen()函数引入的头文件 
int main()
{
	char shuz[100]; 
	scanf("%s",shuz);//字符数组的输入%s不加& 
	int num=strlen(shuz);// strlen()函数计算括号里面的字符数组的长度 
	printf("字符串的长度为：%d\n",num);
	for(int i=strlen(shuz)-1;i>=0;i--)
	{
		printf("%c",shuz[i]);	
	}
	return 0; 
} 
