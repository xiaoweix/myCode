#include<stdio.h>
int main()
{
	int xins;
	printf("请输入你的薪水：");
	scanf("%d",&xins);
	if(xins>10000)
	{
		printf("土豪 我们做朋友吧\n");	
	}
	// ||表示的或者  表示的是薪水小于10000或者大于5000 
	if(10000>xins&&xins>5000)//&&并且 表示两个条件同时满足 
	{
		printf("考虑一下\n");	
	} 
	else //养成一个好习惯 能用if-else的尽量用if-else! 
	{
		printf("打扰了！打扰了\n");	
	}
	
	getchar(); 
	return 0;
}
