#include<stdio.h>
void swap(int* A,int* B)
{
	int temp;
	temp = *A;
	*A = *B;
	*B = temp; 

}
int main()
{
	int a=10,b=15;
	printf("a=%d,b=%d\n",a,b);
	int* p1=&a;
	int* p2=&b;
	swap(p1,p2);
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
