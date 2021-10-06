/*输入10个数字 将10个数字反转
0 1 2 3 4 5 6 7 8 9 
9 8 7 6 5 4 3 2 1 0
*/
#include<stdio.h>
int main()
{
	int shuz[10]={15,24,36,47,59,65,77,88,94,100};
	int i;
	for(i=0;i<10;i+=2)
	{
		printf("%d ",shuz[i]);	
	}
		
	
	return 0;
} 
