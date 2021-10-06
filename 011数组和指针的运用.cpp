#include<stdio.h>
void sort(int* a,int x)
{
	int i,j;
	for(i=0;i<x;i++)
	{
		for(j=i;j<x;j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void printa(int* a,int x)
{ 
	for(int i =0;i<x;i++)
		printf("%d ",*(a+i));
}
int main()
{
	int a[5]={5,8,9,2,3};
	sort(a,5);
	printa(a,5);
	return 0;
}
