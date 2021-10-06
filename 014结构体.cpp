#include<stdio.h>
struct student//结构体 是自己定义的一种数据类型 
{
	char name[20];//学生的属性 
	int age;
	char class0[20];
	int score;
	
}; 
int main()
{

	struct student stu1,stu2;
	int            i; 
	stu1.age=18;
	gets(stu1.name);
	printf("学生%s的年龄为：%d\n",stu1.name,stu1.age); 
	
	stu2.age=20;
	gets(stu2.name);
	printf("学生%s的年龄为：%d\n",stu2.name,stu2.age); 
	return 0;
}
