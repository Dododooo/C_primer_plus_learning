#include<stdio.h>
int main(void)
{
    int num;
    int count=0;
    
    printf("Please enter the num:\n");
    scanf("%d",&num);

    while(count<11)
    {
        printf("%4d",(num+count));
        ++count;
    }
    return 0;
}