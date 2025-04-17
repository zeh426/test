#include<stdio.h>
int main()
{
    int s,v=0;
    scanf("%d %d", &s, &v);
    int t = s/v;
    if(s%v!=0)//不能整除，时间t加一分钟
    {
        t += 1;
    }
    if(t>0&&t<=470)//当天
    {
        printf("%02d:%02d\n", (470-t)/60, (470-t)%60);
    }
    if(t>470&&t<1910)//提前一天
    {
        t -= 470;
         printf("%02d:%02d\n", (1440-t)/60, (1440-t)%60);
    }
     
return 0;
}