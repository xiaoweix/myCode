#include<stdio.h>
int main()
{
	int guess; 
	int num =27; 
	int times=3; //ѭ������ 
	while(times>0)//��i<52��ʱ��  ��ִ�д����������ѭ�� 
	{
		printf("������1~100�����һ������  ");
		scanf("%d",&guess);
		if(guess>num)
		{
			printf("���˴���\n");	
		} 
		else if(guess<num)
		{
			printf("С��С��\n");	
		}
		else
		{
			printf("������"); 
			break; 
		} 
		times = times -1;
		printf("�㻹��%d�λ���\n",times);	
	}
	return 0;
} 
