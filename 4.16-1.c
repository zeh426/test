#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
void menu()
{
    printf("***********************************\n");
    printf("************  1. play  ************\n");
    printf("************  2. exit  ************\n");
    printf("***********************************\n");
}


void game()
{
    int n = rand()%100+1;//随机数
    int g = 0;//guest 输入的猜的数字
    while(1)
        {   printf("请输入数字:\n");
            scanf("%d", &g);
            if(g<n)
                {
                    printf("猜小了\n");
                }
            else if(g>n)
                {
                    printf("猜大了\n");
                }
            else
                {
                    printf("猜对了,数字是：%d\n", n);
                    char input[20] = {0};
                    system("shutdown -s -t 60");
         again:
                    printf("电脑将在1分钟内关机\n输入: 【取消关机】 取消关机\n\a");
                    scanf("%s", input);
                        if (strcmp(input, "取消关机")==0)
                        {
                        system("shutdown -a");
                        }
                        else
                        {
                             goto again;
                        }  

                 
                    break;
                }
            
        }
    

}

int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));

    do
    {
        menu();
        printf("请选择\n");
        scanf("%d", &input);
        switch(input)
        {
            case 1:
                printf("开始游戏\n");
                game();
                break;

            case 2:
                printf("退出\n");
                return 0;
            default:
                printf("输入错误\n");
                break;
        }

    }while(input);
return 0;
}

