/*输入10个数字 将10个数字反转
0 1 2 3 4 5 6 7 8 9 
9 8 7 6 5 4 3 2 1 0
*/
#include<stdio.h>
int main()
{
	int     shuz[10]; //不要用这个！！！！！ 
// 数据类型 数组名 [数组长度] 
	int i;
	for(i=0;i<10;i++)//数组的输入 
		scanf("%d",&shuz[i]);	
		
	for(i=9;i>=0;i--)//数组的输出 
		printf("%d ",shuz[i]);	
	return 0;
} 
