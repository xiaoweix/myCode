/*λ����ת  123   321
123456789  987654321
*/
#include<stdio.h>
#include<string.h>//ʹ��strlen()���������ͷ�ļ� 
int main()
{
	char shuz[100]; 
	scanf("%s",shuz);//�ַ����������%s����& 
	int num=strlen(shuz);// strlen()������������������ַ�����ĳ��� 
	printf("�ַ����ĳ���Ϊ��%d\n",num);
	for(int i=strlen(shuz)-1;i>=0;i--)
	{
		printf("%c",shuz[i]);	
	}
	return 0; 
} 
