#include<stdio.h> 
int fabsi(int num)//int 返回值的自定义函数 用int定义 
{				//括号里面传进去的参数是int 类型的 
	int temp=num<0?num=0-num:num;
	return temp; //返回值 将计算结果返回
				//返回的类型必须和上面定义函数的类型一致 
}
//定义一个float返回值，float参数的自定义函数 
float fabsf(float num)//float返回值的自定义函数 用float定义
{					//括号里面传进去的参数是float 类型的 
	float temp=num<0?num=0-num:num;
	return temp; //返回值 将计算结果返回
				//返回的类型必须和上面定义函数的类型一致 
}	
int main()
{
	int a=fabsi(-5);//函数的调用 用相同类型的变量接受函数的返回值 
	printf("----%d---\n",a);
	
	float f=fabsf(-5.5);//函数的调用 用相同类型的变量接受函数的返回值 
	printf("%f",f);
	return 0;
}
