#include<stdio.h>
int main()
{
	int num1;//整数变量 
	printf("请输入一个数：");//提示语 
	scanf("%d",&num1);//scanf语句中有&（取地址）
	                  //printf语句中没有& 
	                  //从键盘读入一个数，保存到num1中 
	int num2;
	printf("请输入第二个数：");
	scanf("%d",&num2);//从键盘读入一个数，保存到num2中
	int num3=num1+num2; 
	float xs1=1.5;
	float xs2=2.5;
	float xs3=xs1+xs2;
	printf("%d+%d=%d\n",num1,num2,num3);//整数输出用%d
	//printf("%.2f+%f=%f",xs1,xs2,xs3); //小数用%f 
	//%.2f表示保留两位小数 
	return 0;
} 
