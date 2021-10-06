/*
083-1元素搜索
输入k个元素，保存到一个整形数组，查找的元素X，
需要你讲元素X的所有ID打印出来。没有该元素，输出未查找到！
输入案例：
10
1 2 3 4 1 5 9 8 1 7
1
1 5 9
*/
#include<stdio.h>
int main()
{
	int x;
	int num[1000];
	scanf("%d",&x);//有多少个元素 
	for(int i=0;i<x;i++)//数组的输入 
	{
		scanf("%d",&num[i]);
	} 
		
	
	int a,f=0;//带检索的元素 
	scanf("%d",&a);//输入元素 
	for(int i=0;i<x;i++)//循环遍历 查找元素 
	{
		if(num[i]==a)
		{
			f=1;
			printf("%d ",i+1);
		} 
			
	}
	if(f==0)
		printf("未查找到！");
	return 0;
}
