#include<stdio.h>
int main()
{
	float num1;//小数数变量 
	printf("请输入一个数：");//提示语 
	scanf("%f",&num1);//scanf语句中有&（取地址）
	                  //printf语句中没有& 
	                  //从键盘读入一个数，保存到num1中 
	float num2;
	printf("请输入第二个数：");
	scanf("%f",&num2);//从键盘读入一个数，保存到num2中
	float num3=num1+num2; 
	printf("%.3f+%.2f=%.3f\ n",num1,num2,num3);//整数输出用%d
	return 0;
} 
