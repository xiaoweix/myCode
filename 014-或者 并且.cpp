#include<stdio.h>
int main()
{
	int xins;
	printf("���������нˮ��");
	scanf("%d",&xins);
	if(xins>20000|| xins<5000)
	{
		printf("����һ��\n");	
	}
	// ||��ʾ�Ļ���  ��ʾ����нˮС��10000���ߴ���5000 
	else if(20000>xins&&xins>5000)//&&���� ��ʾ��������ͬʱ���� 
	{
		printf("������\n");	
	} 
	else //����һ����ϰ�� ����if-else�ľ�����if-else! 
	{
		printf("�����ˣ�������\n");	
	}
	
	getchar(); 
	return 0;
}
