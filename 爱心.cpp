#include <stdio.h>
#include <math.h>
#include <windows.h>
#define r 10
#define R 172
int main(void)
{
    FILE *fp;
    int n;
    int i, j, e; //��������һ��Ҫ���ڿ�ͷ��������������֧��C99��׼
    int a;
    if((fp = fopen("LOVE.txt", "w")) == NULL)
    {
        printf("File open error!\n");
        exit(0);
    }
    char love[1000]="ʱ���ת�ƿɸĲ���С�ݾ��յ����ա�\n��֪�����������������������Ҳ����ס����Ĵ��ۡ�\n��Ҳ֪�����������ĵ����˥��Ҳ�������ջ�����԰�ļ��ڼ���\n��������ȥ֮��Ҫȥ����֮��Ҫ�������վܾ����ã�Ȼ�������Ѵ���������֪����\n����żȻ���׵���һ˲�䣬��������еļ�Լ��\n��Ȼ�������Ŀ̹����ġ���Ц���㣬\n��Ȼ����յ��������顣";
	int i1=0;
	while(i1<314)
	{
		printf("%c",love[i1]);
		i1++;
		Sleep(10);
	}
	printf("\n");
    for(i = 1, a = r; i < r / 2; i++, a--)
    {
        for(j = (int) ( r - sqrt((r * r - (a - i) * (a - i))) ); j > 0; j--)
        {
            printf(" ");
            fprintf(fp, "%s", " ");
        }
        for(e = 1; e <= 2 * sqrt((r * r - (a - i) * (a - i))); e++)
        {
            printf("\3");
            fprintf(fp, "%s", " * ");
        }
        for(j = (int) ( 2 * ( r - sqrt((r * r - (a - i) * (a - i)))) ); j > 0; j--)
        {
            printf(" ");
            fprintf(fp, "%s", " ");
        }
        for(e = 1; e <= 2 * sqrt( (r * r - (a - i) * (a - i)) ); e++)
        {
            printf("\3");
            fprintf(fp, "%s", " * ");
        }
        printf("\n");
        fprintf(fp, "%s", "\n");
    }
    for(i = 1; i < 40; i++)
    {
        if(i == 6)
        {
            printf("(��_��)I LOVE MY POGE(��_��)");
            i += 30;
        }
        printf("\3");
        fprintf(fp, "%s", " * ");
    }
    printf("\n");
    for(i = 1; i <= R / 2; i++)
    {
        if(i % 2 || i % 3)continue;
        for(j = (int) ( R - sqrt( (double) (R * R - i * i) ) ); j > 0; j--)
        {
            printf(" ");
            fprintf(fp, "%s", " ");
        }
        for(e = 1; e <= 2 * ( sqrt( (double)(R * R - i * i) ) - (R - 2 * r) ); e++)
        {
            printf("\3");
            fprintf(fp, "%s", " * " );
        }
        printf("\n");
    }
    printf("��ѡ�Ų�����ʽ��\n �Զ����ţ��� 1 �����Ʋ��ţ��� 0\n");
    printf("�������ֺ��밴 enter ��\n");
    scanf("%d", &n);
    if(n == 0)
    {
        while(1)
        {
            system("color a");
            system("pause");
            system("color b");
            system("pause");
            system("color c");
            system("pause");
            system("color d");
            system("pause");
            system("color e");
            system("pause");
            system("color f");
            system("pause");
        }
    }
    else
    {
        while(1)
        {
            system("color a");
            Sleep(100);
            system("color b");
            Sleep(100);
            system("color c");
            Sleep(100);
            system("color d");
            Sleep(100);
            system("color e");
            Sleep(100);
            system("color f");
            Sleep(100);
            system("color 0");
            Sleep(100);
        }
    }
    return 0;
}
