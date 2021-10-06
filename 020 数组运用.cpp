#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char  love[100];
	int num[100]={53,15,};
	gets(love);
	for(int i=0;i<strlen(love);i++)
	{
		printf("%d,",love[i]);
		num[i]=love[i];	
	} 
	for(int i=0;i<strlen(love);i++)
	{
		printf("%c ",num[i]);
	} 
	
}
