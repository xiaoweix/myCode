#include<stdio.h>
#include<windows.h>
int main()
{
	int option;
	printf("��������Ĳ�����");
	scanf("%d",&option); 
	int i; 
	if(option==1)
	{
		 i=MessageBox(NULL,TEXT("�������"),TEXT("C����"),MB_OK); 
		printf("%d",i);
	}
	if(option==2)
	{
		i=MessageBox(NULL,TEXT("�������"),TEXT("C����"),MB_YESNO); 
		printf("%d",i);
	}
	if(option==3)
	{
		int j=MessageBox(NULL,TEXT("�������"),TEXT("C����"),MB_YESNOCANCEL); 
		printf("%d",j);
	}	
	
	return 0;
}
