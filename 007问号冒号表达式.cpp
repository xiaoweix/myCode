/* 输入两个数 计算两者之间的差
这个差必须为正数*/ 
#include<stdio.h>
int main()
{
	int a=15;
	int b=10;
	int c;
	//如果说a>b那么执行a-b否则执行b-a 
	//      a>b? 如果对的:否则； 
	c=a>b?(++a)-(b--):(++b)-(a--);
	printf("%d ",c);
	return 0;
}
