#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 0;
    system("shutdown -s -t 60");
again:
    printf("电脑将在1分钟内关机，输入123456取消关机\n");
    scanf("%d", &a);
    if (a==123456)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;

}
//修复中文乱码