#include<stdio.h>
//������Զ��庯��
//��void ��ʾ����һ���Լ��ĺ��� 
/*��������������Ǵ�ӡ��*/
void printstarup(int num) //�Լ��ĺ��� �����������ʾ���Ǵ���ȥ�Ĳ��� 
{
	int h,k1,k2,num2=0;
	for(h=1;h<=num;h++)//��ӡ�ϰ벿�� 
	{
		printf("��%d��",h);
		for(k1=num-h;k1>0;k1--)//ÿһ��ǰ���ӡ�Ŀո� 
		{
			printf(" ");
		}
		printf("*");
		num2++; 
		for(k2=2*(h-1)-1;k2>0;k2--)//ÿһ���м�Ŀո�
		{
			printf(" "); 
		} 
		if(h>1)
		{
			printf("*"); 
			num2++;
		}
			
		printf("\n");
	}

} 
void printstardown(int num) //�Լ��ĺ��� �����������ʾ���Ǵ���ȥ�Ĳ��� 
{
		/*4
	1	@*@@@*  (num-1-h)*2-1
	2	@@*@*
	3	@@@*
	*/
	int h,k1,k2,num2=0;
	for(h=1;h<num;h++)//�°벿�� 
	{
		printf("��%d��",h);
		for(k1=h;k1>0;k1--)	//��ӡ��һ���ո� 
			printf(" ");
		printf("*"); 
		num2++;
		for(k2=(num-1-h)*2-1;k2>0;k2--)//��ӡ�м�Ŀո�
			printf(" ");
		if(h!=num-1)
		{
			printf("*"); 
			num2++;
		}
		printf("\n");
	} 
	printf("һ��ʹ����%d��*",num2);
}
int main()
{
	
	int i;
	printstarup(3); //�Լ����ú���
	printstardown(3);
	printf("\n");
	
	printstarup(5); //�Լ����ú���
	
	printf("\n");
	
	printstarup(9); //�Լ����ú���
	
	return 0;
}
