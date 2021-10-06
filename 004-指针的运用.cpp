#include<stdio.h>
void swap(int A,int B)
{
	printf("交换前A=%d,B=%d\n",A,B);
	int temp;
	temp = A;
	A = B;
	B = temp; 
	printf("交换后A=%d,B=%d\n",A,B);
}
int main()
{
	int a=10,b=15;
	printf("a=%d,b=%d\n",a,b);
	swap(a,b);
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
