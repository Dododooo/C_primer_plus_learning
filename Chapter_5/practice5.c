#include <stdio.h>
int main(void)
{

    int count,sum;
    int days;
    count = sum = 0;
    printf("Please enter the days");
    scanf("%d",&days);

    while(count++<days)
    {
        sum = sum + count;
        printf("You make %d summary at %dday\n",sum,count);

    }
    printf("sum = %d",sum);

    return 0;

}