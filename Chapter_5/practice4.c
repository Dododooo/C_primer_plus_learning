#include<stdio.h>
int main(void)
{
    int u_cm;
    int foot;
    float inch;
    printf("Please enter the size\n");
    scanf("%d",&u_cm);
    while (u_cm>0)
    {
        foot =  u_cm / 30.48;
        inch = ((u_cm/30.48)-foot)*12;
        printf("%f cm = %dfoot and %.1f inch \n",u_cm,foot,inch);
        printf("Enter another days of 0 for exit\n");
        scanf("%d",&u_cm);
    }
}