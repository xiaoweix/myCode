#include<stdio.h>
#include<windows.h>
int main()
{
//MessageBox(NULL,TEXT("世界你好"),TEXT("C语言"),MB_OK); 
int i=MessageBox(NULL,TEXT("世界你好"),TEXT("C语言"),MB_YESNO); 
printf("%d",i);
	return 0;
	
}
