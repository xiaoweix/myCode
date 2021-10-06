#include<stdio.h>
typedef int zhengshu; //给 int 换一个名字（昵称） 
typedef struct student//结构体 是自己定义的一种数据类型 
{
	char name[20];//学生的属性 
	int age;
	char class0[20];
	int score;
	
} stu;
int main()
{
	zhengshu i=15;
	//struct student stu1;
	stu stu1;
	stu1.age=18;
	printf("%d %d",i,stu1.age);
	return 0;
}
