#include<stdio.h>
typedef struct student//�ṹ�� ���Լ������һ���������� 
{
	char name[20];//ѧ�������� typedef
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
	printf("ѧ��%s������Ϊ��%d\n",s1.name,s1.age); 
	
	ps1->age=20;
	gets(ps1->name);
	printf("ָ�뷽ʽ������ѧ��%s������Ϊ��%d\n",ps1->name,ps1->age); 
	return 0;
}







