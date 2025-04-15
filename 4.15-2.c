#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,p,s=0;
    scanf("%lf %lf %lf", &a, &b, &c);
    p=(a+b+c)/2;
    s=pow(p*(p-a)*(p-b)*(p-c),0.5);
    if(a+b>c && a+c>b && b+c>a)
    {
        printf("%.1lf\n", s);
    }
    else
    {
        printf("不能构成三角形\n");
    }
return 0;
}