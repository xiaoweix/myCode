#include<stdio.h>
//类：对某项事物的公有属性或者特征的集合
//对象：是类的一个实例 
struct stu
{
	char stuid[20];//属性 
	char name[20];
	int math;//属性 
	int eng;
	int c_lg;
	float avg;
	int sum;	
};

int main()
{
	stu s1;
	s1.eng=85;
	printf("%d",s1.eng);
	
	
}
