#include<stdio.h>
int main()
{
	int a=10,b=15;
	printf("a=%d,b=%d\n",a,b);
	int* p1=&a;
	int* p2=&b;
	
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	
	printf("½»»»ºóa=%d,b=%d\n",a,b);
	return 0;
}
