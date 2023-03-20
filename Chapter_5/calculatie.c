#include <stdio.h>
int main(void)
{
    int num=0;
    int i=1;

    while (i<=100)
    {
        num = num +i;
        i = i+1;
        printf("num=%d,i=%d\n",num,i);
    }
    printf("ALLnum = %d",num);

    return 0;
}