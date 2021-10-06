#include<stdio.h>
int main()
{
	int a=10,b=15;
	printf("a=%d,b=%d\n",a,b);
	int* p1=&a;
	printf("*p1=%d\n",*p1);
	*p1 = 30;
	printf("改变后*p1=%d\n",*p1);
	printf("改变后a=%d\n",a);
	return 0;
}
