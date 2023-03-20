#include<stdio.h>
int main(void)
{
    int u_day;
    int day,week;
    printf("Please enter the day\n");
    scanf("%d",&u_day);
    while (u_day>0)
    {
        week = u_day /7;
        day = u_day % 7;
        printf("%d days is %dweeks and %d day\n",u_day,week,day);
        printf("Enter another days of 0 for exit\n");
        scanf("%d",&u_day);
    }
}