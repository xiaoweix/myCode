#include<stdio.h>
int main()
{
	int n=2147483647;
	//2的31次方-1  
	//00000....0000
	//01111....1111
	//第一个二进制位0表示的是符号位 
	printf("%d",n); 
	return 0;
} 
