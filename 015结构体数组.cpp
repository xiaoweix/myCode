#include<stdio.h>
struct student//�ṹ�� ���Լ������һ���������� 
{
	char name[20];//ѧ�������� typedef
	int age;
	char class0[20];
	int score;
} stu1,stu2; 

int main()
{
	struct student stu[100];
	stu[0].age=18;
	gets(stu[0].name);
	printf("ѧ��%s������Ϊ��%d\n",stu[0].name,stu[0].age); 
	
	stu[1].age=20;
	gets(stu[1].name);
	printf("ѧ��%s������Ϊ��%d\n",stu[1].name,stu[1].age); 
	return 0;
}
