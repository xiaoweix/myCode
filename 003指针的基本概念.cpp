#include<stdio.h>
int main()
{
	int  a=10;
	int* p=&a;//存储变量的物理地址的 
	printf("a=%d\n",a);
	printf("指针p保持的地址的值是%d\n",*p);//取出指针地址里面的值
										//用*p 
	
	printf("a的地址为：%d\n",&a);
	printf("指针p里面的地址%d\n",p); 
	
	//printf("指针p的地址%d\n",&p); 
	return 0;
}
