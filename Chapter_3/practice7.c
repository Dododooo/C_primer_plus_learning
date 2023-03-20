#include<stdio.h>
int main(void)
{
    float inch_height;
    float cm_height;
    printf("Please enter your height in inch:");
    scanf("%f",&inch_height);
    cm_height= 2.54 * inch_height;
    printf("your height in cm is %.2fcm",cm_height);
    return 0;
}