/*
083-2统计字符
输入一个字符串，统计里面各个字符出现的次数
输入案例：
AABBC12++A..
输出案例
A:3
B:2
C:1
1:1
2:1
+:2
.:2
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	int a[128]={0};
	gets(s);
	int i,num;
	for(i=0;i<strlen(s);i++)
	{
		num=(int)s[i];
		a[num]++;
		printf("%d ",num);
	}
	//printf("\n实验%c\n",65);
	for(i=0;i<128;i++)
	{
		if(a[i]!=0)
			printf("%c:%d\n",i,a[i]);
	}
	return 0;
 } 
