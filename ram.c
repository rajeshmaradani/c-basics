#include<stdio.h>
void main()
{
    int total_minutes,h,m;
    scanf("%d",&total_minutes);
    h=total_minutes/60;
    m=total_minutes%60;
    printf("%d hour,%d minute",h,m);
}
