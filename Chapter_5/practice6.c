#include <stdio.h>
int main(void)
{

    int count,sum,money;
    int days;
    count = sum = money=  0;
    printf("Please enter the days");
    scanf("%d",&days);

    while(count++<days)
    {
        money = count * count;
        sum = sum + money;
        
        printf("You make %d totally at %dday\n",sum,count);

    }
    printf("sum = %d",sum);

    return 0;

}