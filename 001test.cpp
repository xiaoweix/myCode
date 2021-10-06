/*
ksjhdajkdksajdshajg
*/
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int h,k1,k2,num2=0;
	for(h=1;h<=num;h++)//打印上半部分 
	{
		printf("第%d行",h);
		for(k1=num-h;k1>0;k1--)//每一行前面打印的空格 
		{
			printf(" ");
		}
		printf("*");
		num2++; 
		for(k2=2*(h-1)-1;k2>0;k2--)//每一行中间的空格
			printf(" "); 
		if(h>1)
		{
			printf("*"); 
			num2++;
		}
			
		printf("\n");
	}
	/*4
	1	@*@@@*  (num-1-h)*2-1
	2	@@*@*
	3	@@@*
	*/
	for(h=1;h<num;h++)//下半部分 
	{
		printf("第%d行",h);
		for(k1=h;k1>0;k1--)	//打印第一个空格 
			printf(" ");
		printf("*"); 
		num2++;
		for(k2=(num-1-h)*2-1;k2>0;k2--)//打印中间的空格
			printf(" ");
		if(h!=num-1)
		{
			printf("*"); 
			num2++;
		}
		printf("\n");
	} 
	printf("一共使用了%d个*",num2);
	
	return 0;
}



