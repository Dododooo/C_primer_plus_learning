#include <stdio.h>
int main(void)
{
    float num1;

    printf("enter 1 float nums\n");
    scanf("%f",&num1);

    printf("a.This input is %.1f or %.1e\n",num1,num1);
    printf("b.This input is %+.3f or %.3E\n",num1,num1);

}