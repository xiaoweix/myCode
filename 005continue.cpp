/*
  ��ӡ1-100����ķ�3�ı��������֣� 
*/
#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<1000;i++)
	{
		if(i%3==0)
		{
			continue;//������ֻҪһִ��
			//��������ѭ�� ��ִ����һ��ѭ�� 
		}
		printf("%d ",i);	
	} 
	return 0;
}
