#include<stdio.h>
#include<windows.h>
int main()
{
	int option;
	printf("请输入你的操作：");
	scanf("%d",&option); 
	int i; 
	if(option==1)
	{
		 i=MessageBox(NULL,TEXT("世界你好"),TEXT("C语言"),MB_OK); 
		printf("%d",i);
	}
	if(option==2)
	{
		i=MessageBox(NULL,TEXT("世界你好"),TEXT("C语言"),MB_YESNO); 
		printf("%d",i);
	}
	if(option==3)
	{
		int j=MessageBox(NULL,TEXT("世界你好"),TEXT("C语言"),MB_YESNOCANCEL); 
		printf("%d",j);
	}	
	
	return 0;
}
