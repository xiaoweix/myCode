#include<stdio.h>
#include<stdlib.h>
/*定义链表的每一个节点*/
/*
xxw1 18 90
xxw2 19 92
xxw3 20 95
*/
typedef struct stu{
	int age;
	int score; 
	struct stu* next;//指向结构体的指针 
	
} List; //列表 
int  main()
{
	List L1,L2,L3,L4;
	L1.age = 18;
	L1.score=90;
	L1.next=&L2;
	
	L2.age=20;
	L2.score=95;
	L2.next=&L3;
	
	L3.age=22;
	L3.score=88;
	L3.next=&L4;
	
	L4.age=21;
	L4.score=89;
	L4.next=NULL;
	
	List* p=&L1;
	printf("%d %d\n",p->age,p->score);
	
	p=p->next;
	printf("%d %d\n",p->age,p->score);
	printf("%d %d\n",p->next->next->age,p->next->next->score);
	return 0;
} 





