/*090-2 ͳ���ܷ�
����5λͬѧ��һ����Ϣ������ѧ�š���������ѧ�ɼ���
Ӣ��ɼ���C���Գɼ������ÿλͬѧ��ƽ���ֺ��ܷ֣�
Ȼ�����ִܷӸߵ������򡣣�ʹ�ýṹ�����飩
*/
#include<stdio.h>
typedef struct student
{
	char stuid[20];
	char name[20];
	int math;
	int eng;
	int c_lg;
	float avg;
	int sum;	
} stu;
int main()
{
	stu S[7];
	int i,j;	
	printf("ѧ��\t����\t��ѧ\tӢ��\tC����\n");
	for(i=0;i<5;i++)
	{
		scanf("%s %s %d %d %d",S[i].stuid,S[i].name,&S[i].math,&S[i].eng,&S[i].c_lg); 
		S[i].sum=S[i].math+S[i].eng+S[i].c_lg;
		S[i].avg = S[i].sum/3.0;
	}
	stu temp;
	stu* p;
	p=S;
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			//if(S[i].sum<S[i].sum) 
			if((p+i)->sum<(p+j)->sum)
			{
				temp = S[i];
				S[i] = S[j];
				S[j] = temp;	
			}	
		}	
	}
	printf("ѧ��\t����\t��ѧ\tӢ��\tC����\t�ܷ�\tƽ����\n");
	for(i=0;i<5;i++)
	{
		printf("%s\t%s\t%d\t%d\t%d\t%d\t%0.2f\n",S[i].stuid,S[i].name,S[i].math,S[i].eng,S[i].c_lg,S[i].sum,S[i].avg); 
	}
	return 0;
}
/*
001    xxw1    90    90    90
002    xxw2    85    85    85
003    xxw3    60    60    65
004    xxw4    75    70    76
005    xxw5    95    95    95 




*/





 
