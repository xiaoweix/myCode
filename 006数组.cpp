#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x;

	
	int num[10];
	printf("%d",sizeof(num)); 
	
	scanf("%d",&x);
	int* num2;
	num2 = (int*)malloc(x*sizeof(int));
	//申请内存 括号后为内存大小 
	//将申请好的内存的地址 返回给这个指针 
	// int num2[10]的基本原理 
	for(int i=0;i<x;i++)
		scanf("%d",&num2[i]); 
	for(int i=0;i<x;i++)
		printf("%d ",num2[i]); 
	return 0;
}
