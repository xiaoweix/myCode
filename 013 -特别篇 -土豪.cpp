#include<stdio.h>
int main()
{
	int xins;
	printf("���������нˮ��");
	scanf("%d",&xins);
	if(xins>10000)
	{
		printf("���� ���������Ѱ�\n");	
	}
	// ||��ʾ�Ļ���  ��ʾ����нˮС��10000���ߴ���5000 
	if(10000>xins&&xins>5000)//&&���� ��ʾ��������ͬʱ���� 
	{
		printf("����һ��\n");	
	} 
	else //����һ����ϰ�� ����if-else�ľ�����if-else! 
	{
		printf("�����ˣ�������\n");	
	}
	
	getchar(); 
	return 0;
}
