#include<stdio.h>
//������Զ��庯��
//��void ��ʾ����һ���Լ��ĺ��� 
void zjdhs() //�Լ��ĺ��� 
{
	printf("******************\n");
	printf("**    IG  ����  **\n");
	printf("**    lpl ����  **\n");
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
		printf("%d��\n",i);
		zjdhs(); //�Լ����ú���
		hs(); 
	} 
		
	return 0;
} 
