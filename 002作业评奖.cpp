/*
090-1 �ַ�������
��д����insert(char *s1,char *s2,int pos)��
ʵ�����ַ���s1�е�ָ��λ��pos�������ַ���s2��
���밸����
Happy  Year
New
7
���������
Happy New Year
*/
#include<stdio.h>
#include<string.h>
void cat(char* a,char* b,int id)//����ƴ�ӷ� 
{
	char* p1=a+id;//a��������  �ҵ����� 
	char* p2=b+strlen(b);//b�������� 
	*p2 = ' ';
	p2++;//Ų���ո���� 
	while(*p1!='\0')//��ʼ���� ��ʼƴ�� 
	{
		*p2 = *p1;
		p2++;
		p1++; 
	} 
	*p2='\0';
	//�ڶ�������
	p1=a+id-1;//�ҵ��������ĵ��� 
	p2=b;//�ҵ����� 
	while(*p2!='\0')//��ʼ���� ��ʼƴ�� 
	{
		*p1=*p2;
		p1++;
		p2++;	
	}
	*p1='\0';//����˿� 
	//puts(a);
	//putchar(*p1);//��һ�µ�����û���ҵ� 
}
int main()
{
	char A[100];
	char B[100];
	int ID;
	gets(A);
	gets(B);
	scanf("%d",&ID);
	
	cat(A,B,ID); 
	puts(A);
	puts(B);
	
	return 0;
} 







