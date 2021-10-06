#include<stdio.h>
#include<string.h>//使用strlen()函数引入的头文件 
int main()
{
	char shuz[100]; 
	gets(shuz);//读入一个字符串
	int num=strlen(shuz);
	printf("数组的长度为：%d\n",num);
	printf("printf输出为：%s\n",shuz);
	puts(shuz);//输出字符串 
	
	///scanf() 遇到空格和回车就结束输入
	//gets() 遇到回车才会结束输入 
	return 0; 
}
