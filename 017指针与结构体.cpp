#include<stdio.h>
typedef struct student//结构体 是自己定义的一种数据类型 
{
	char name[20];//学生的属性 typedef
	int age;
	char class0[20];
	int score;
} stu;
int main()
{
	stu s1;
	stu* ps1; 
	ps1 = &s1;
	
	s1.age=18;
	gets(s1.name);
	printf("学生%s的年龄为：%d\n",s1.name,s1.age); 
	
	ps1->age=20;
	gets(ps1->name);
	printf("指针方式的优秀学生%s的年龄为：%d\n",ps1->name,ps1->age); 
	return 0;
}







