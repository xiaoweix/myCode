#include<stdio.h>
//�ࣺ��ĳ������Ĺ������Ի��������ļ���
//���������һ��ʵ�� 
struct stu
{
	char stuid[20];//���� 
	char name[20];
	int math;//���� 
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
