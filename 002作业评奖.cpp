/*
090-1 字符串插入
编写函数insert(char *s1,char *s2,int pos)，
实现在字符串s1中的指定位置pos处插入字符串s2。
输入案例：
Happy  Year
New
7
输出案例：
Happy New Year
*/
#include<stdio.h>
#include<string.h>
void cat(char* a,char* b,int id)//手术拼接法 
{
	char* p1=a+id;//a的手术刀  找到刀口 
	char* p2=b+strlen(b);//b的手术刀 
	*p2 = ' ';
	p2++;//挪到空格后面 
	while(*p1!='\0')//开始手术 开始拼接 
	{
		*p2 = *p1;
		p2++;
		p1++; 
	} 
	*p2='\0';
	//第二次手术
	p1=a+id-1;//找到动手术的刀口 
	p2=b;//找到刀口 
	while(*p2!='\0')//开始手术 开始拼接 
	{
		*p1=*p2;
		p1++;
		p2++;	
	}
	*p1='\0';//缝合伤口 
	//puts(a);
	//putchar(*p1);//看一下刀口有没有找到 
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







