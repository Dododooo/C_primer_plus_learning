#include<stdio.h>
const int M_PER_H = 60;
int main(void)
{
    int u_min;
    int min,hour;

    printf("Please enter the min you spend:\n");
    scanf("%d",&u_min);
    while(u_min>0)
    {
        hour = u_min / M_PER_H;
        min = u_min % M_PER_H;
        printf("You spended %dh %dmin,enter value lower than 0 to exit\n",hour,min);
        scanf("%d",&u_min);
    }
    return 0;
    

}