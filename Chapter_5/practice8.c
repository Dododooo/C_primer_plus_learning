#include<stdio.h>
int main(void)
{
    int num;
    int one,two;
    printf("Please enter the second num\n");
    scanf("%d",&two);
    printf("Please enter the second num\n");
    scanf("%d",&one);
    while (one>0)
    {
        num = one % two;
        printf("%d  %%  %d = %d \n",one,two,num);
        printf("Enter another num of 0 for exit\n");
        scanf("%d",&one);
    }
    return 0;
}