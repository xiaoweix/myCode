#include<stdio.h>
#include<windows.h>
int main()
{
//MessageBox(NULL,TEXT("�������"),TEXT("C����"),MB_OK); 
int i=MessageBox(NULL,TEXT("�������"),TEXT("C����"),MB_YESNO); 
printf("%d",i);
	return 0;
	
}
