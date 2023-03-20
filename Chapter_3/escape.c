#include<stdio.h>
int main(void)
{
    float salary;
    printf("\aEnter you desired monthly salary");
    printf("$_____\b\b\b\b\b\b\b\b");
    scanf("%f",&salary);
    printf("\n\t$%.2f amonth is $%.2f a year",salary,salary*12);
    printf("\rGee!\n");
    return 0;
}