#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	system("color C"); 
	char shuz[10][50]={
		"这里是我想要对你说的话：0 ",
		"这里是我想要对你说的话：1  ",
		"这里是我想要对你说的话：2  ",
		"这里是我想要对你说的话：3  ",
		"这里是我想要对你说的话：4  ",
		"这里是我想要对你说的话：5  ",
		"这里是我想要对你说的话：6  ",
		"这里是我想要对你说的话：7  ",
		"这里是我想要对你说的话：8  ",
		"这里是我想要对你说的话：9  ",
		
		};
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<strlen(shuz[i]);j++)
		{
			printf("%c",shuz[i][j]);
			Sleep(25);	
		}
		printf("\n\n");
		Sleep(1600);
		
	}
	
}
