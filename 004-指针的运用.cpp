#include<stdio.h>
void swap(int A,int B)
{
	printf("����ǰA=%d,B=%d\n",A,B);
	int temp;
	temp = A;
	A = B;
	B = temp; 
	printf("������A=%d,B=%d\n",A,B);
}
int main()
{
	int a=10,b=15;
	printf("a=%d,b=%d\n",a,b);
	swap(a,b);
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
