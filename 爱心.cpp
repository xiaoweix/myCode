#include <stdio.h>
#include <math.h>
#include <windows.h>
#define r 10
#define R 172
int main(void)
{
    FILE *fp;
    int n;
    int i, j, e; //变量定义一定要放在开头，许多编译器还不支持C99标准
    int a;
    if((fp = fopen("LOVE.txt", "w")) == NULL)
    {
        printf("File open error!\n");
        exit(0);
    }
    char love[1000]="时间的转移可改不了小屋旧日的容颜。\n我知道再怎样丰润的青蓝和萃绿也经不住寒风的摧折。\n我也知道，再怎样的调零和衰败也会有来日花开满园的季节季，\n万物有序，去之终要去，来之终要来，换颜拒绝不得，然而人心难待，你怎会知道，\n在你偶然回首的那一瞬间，深藏于心中的激约，\n仍然是这样的刻骨铭心。含笑对你，\n仍然如旧日的明朗深情。";
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
            printf("(∩_∩)I LOVE MY POGE(∩_∩)");
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
    printf("请选着播放形式：\n 自动播放：按 1 ，控制播放：按 0\n");
    printf("按完数字后请按 enter 键\n");
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
