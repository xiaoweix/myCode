#include<stdio.h>
struct student//�ṹ�� ���Լ������һ���������� 
{
	char name[20];//ѧ�������� 
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
	printf("ѧ��%s������Ϊ��%d\n",stu1.name,stu1.age); 
	
	stu2.age=20;
	gets(stu2.name);
	printf("ѧ��%s������Ϊ��%d\n",stu2.name,stu2.age); 
	return 0;
}
