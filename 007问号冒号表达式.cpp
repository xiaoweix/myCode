/* ���������� ��������֮��Ĳ�
��������Ϊ����*/ 
#include<stdio.h>
int main()
{
	int a=15;
	int b=10;
	int c;
	//���˵a>b��ôִ��a-b����ִ��b-a 
	//      a>b? ����Ե�:���� 
	c=a>b?(++a)-(b--):(++b)-(a--);
	printf("%d ",c);
	return 0;
}
