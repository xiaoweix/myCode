#include<stdio.h>
int main()
{
	int x;
	int num[1000];
	scanf("%d",&x);//有多少个元素 
	int* p=num;
	for(int i=0;i<x;i++)//数组的输入 
	{
		scanf("%d",p);
		p++;
	} 
	printf("*p=%d \n",*p);//假设输入3个数 这里的指针p已经指向了num【3】 
	for(int i=0;i<x;i++)
		printf("%d ",num[i]);
	
	return 0;
	
}
