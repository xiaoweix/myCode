#include<stdio.h>
typedef int zhengshu; //�� int ��һ�����֣��ǳƣ� 
typedef struct student//�ṹ�� ���Լ������һ���������� 
{
	char name[20];//ѧ�������� 
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
