#include<stdio.h>
#include<stdlib.h>
/*���������ÿһ���ڵ�*/
/*
xxw1 18 90
xxw2 19 92
xxw3 20 95
*/
typedef struct stu{
	char name[20];
	int age;
	int score; 
	struct stu* next;
	
} List; 
int main()
{
	List stu1,stu2,stu3;
	int i;
	scanf("%s %d %d",stu1.name,&stu1.age,&stu1.score);
	stu1.next = &stu2;
	scanf("%s %d %d",stu2.name,&stu2.age,&stu2.score);
	stu2.next = &stu3;
	scanf("%s %d %d",stu3.name,&stu3.age,&stu3.score);
	stu3.next = NULL;
	List* p=&stu1;
	//List* L=create(3);
	//List* p=L;
	//read(L);
	while(p->next)
	{
		printf("�����ǣ�%s ���䣺%d �ɼ���%d\n",p->name,p->age,p->score);
		p=p->next;	
	}
		printf("�����ǣ�%s ���䣺%d �ɼ���%d\n",p->name,p->age,p->score);
} 

