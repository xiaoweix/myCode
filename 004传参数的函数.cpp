#include<stdio.h>
#include<windows.h> 
//这个是自定义函数
//用void 表示创建一个自己的函数 
void igtime(int a) //自己的函数 ，括号里面表示的是传进去的参数 
{
	printf("第%d次IG牛逼\n",a);
	printf("******************\n");
	printf("**    IG  加油  **\n");
	printf("**    lpl 加油  **\n");
	printf("******************\n\n");
} 
int main()
{	
	int i;
	printf("");
	igtime(10); //自己调用函数
	Sleep(1000);
	igtime(66); //自己调用函数
	igtime(666); //自己调用函数
	return 0;
} 
