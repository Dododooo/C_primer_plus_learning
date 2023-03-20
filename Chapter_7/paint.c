#include<stdio.h>
#define COERAGE 350
int main(void)
{
    int sq_feet;
    int cans;

    printf("Enter the number of square feet to be painted:\n");
    while (scanf("%d",&sq_feet))
    {
        cans = sq_feet/COERAGE;
        cans+=(sq_feet%COERAGE==0)?0:1;
        printf("youneed %d %s of paint.\n",cans,(cans==1)?"can":"cans");
        printf("enter next value(q to quit)");
    }
    return 0;

}