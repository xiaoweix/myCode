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
List* create(int num)
{
	List *head,*end,*node;
	head = (List*)malloc(sizeof(List));
	end = head;
	for(int i=0;i<num;i++)
	{
		node = 	(List*)malloc(sizeof(List));
		scanf("%s %d %d",node->name,&node->age,&node->score);
		end->next=node;
		end = node;
	}
	end->next=NULL;
	return head;
}
void read(List *L)
{
	List *p = L->next;
	while(p->next!=NULL)
	{
		printf("�����ǣ�%s ���䣺%d �ɼ���%d\n",p->name,p->age,p->score);
		p=p->next;	
	}
	printf("�����ǣ�%s ���䣺%d �ɼ���%d\n",p->name,p->age,p->score);
}
int main()
{
	int i;
	List* L=create(6);
	List* p=L->next;
	read(L);
} 

