#include<stdio.h>
#include<windows.h>
int main()
{
	int i;
	i=MessageBox(NULL,TEXT("做我女朋友好不好？"),TEXT("爱你的小尾"),MB_YESNO); 
	if(i==7)
	{
		i=MessageBox(NULL,TEXT("工资都给你！"),TEXT("爱你的小尾"),MB_YESNO); 
	} 
	if(i==7)
	{
		i=MessageBox(NULL,TEXT("带你去环游世界！"),TEXT("爱你的小尾"),MB_YESNO); 
	} 
	if(i==7)
	{
		i=MessageBox(NULL,TEXT("所有好吃的都给你！"),TEXT("爱你的小尾"),MB_YESNO); 
	} 
	if(i==7)
	{
		i=MessageBox(NULL,TEXT("保大！"),TEXT("爱你的小尾"),MB_YESNO); 
	} 
	if(i==7)
	{
		i=MessageBox(NULL,TEXT("考虑一下好不好？"),TEXT("C语言"),MB_YESNO); 
	} 
	if(i==7)
	{
		i=MessageBox(NULL,TEXT("教你学C语言"),TEXT("C语言"),MB_YESNO); 
	} 
	while(i==7)
	{
		i=MessageBox(NULL,TEXT("如果你不答应我，我就不关窗口，哼！"),TEXT("爱你的小尾"),MB_YESNO); 
	}
	if(i!=7) 
	{
		i=MessageBox(NULL,TEXT("爱你爱你"),TEXT("C语言"),MB_YESNO); 
	} 
	return 0;
}
