#include<stdio.h>
//这个是自定义函数
//用void 表示创建一个自己的函数 
/*这个函数的作用是打印◇*/
void printstarup(int num) //自己的函数 ，括号里面表示的是传进去的参数 
{
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
		{
			printf(" "); 
		} 
		if(h>1)
		{
			printf("*"); 
			num2++;
		}
			
		printf("\n");
	}

} 
void printstardown(int num) //自己的函数 ，括号里面表示的是传进去的参数 
{
		/*4
	1	@*@@@*  (num-1-h)*2-1
	2	@@*@*
	3	@@@*
	*/
	int h,k1,k2,num2=0;
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
}
int main()
{
	
	int i;
	printstarup(3); //自己调用函数
	printstardown(3);
	printf("\n");
	
	printstarup(5); //自己调用函数
	
	printf("\n");
	
	printstarup(9); //自己调用函数
	
	return 0;
}
