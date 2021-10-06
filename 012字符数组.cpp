/*位数反转  123   321
123456789  987654321

*/
#include<stdio.h>
int main()
{
	char shuz[10]; 
	for(int i=0;i<10;i++)
	{
		scanf("%c",&shuz[i]);	
	}
	for(int i=9;i>=0;i--)
	{
		printf("%c",shuz[i]);	
	}
	return 0; 
} 
