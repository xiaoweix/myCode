#include<stdio.h>
/*
	数组就是将同一个类型的多个数字 放到一起 
	array
*/
int main()
{
	float sz[10]={99.9,98.2,65.8,28,4.5,7,3,51,44,55};
	sz[0]=1;
	sz[1]=2; 
	for(int i=9;i>=0;i--)
		printf("%.2f ",sz[i]);
	return 0;
 }
