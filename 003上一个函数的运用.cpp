#include<stdio.h>
//这个是自定义函数
//用void 表示创建一个自己的函数 
void zjdhs() //自己的函数 
{
	printf("******************\n");
	printf("**    IG  加油  **\n");
	printf("**    lpl 加油  **\n");
	printf("******************\n\n");
} 
void hs()
{
	printf("******************\n");
	printf("**    1111111  **\n");
	printf("**    2222222  **\n");
	printf("******************\n\n");
}
int main()
{
	
	int i;
	for(i=0;i<66;i++) 
	{
		printf("%d次\n",i);
		zjdhs(); //自己调用函数
		hs(); 
	} 
		
	return 0;
} 
