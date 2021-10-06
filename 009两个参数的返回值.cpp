#include<stdio.h>
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
 } 
int main()
{
	int max1=max(10,5);
	int max2=max(5,9);
	printf("max1=%d,max2=%d",max1,max2);
	return 0;
 } 
