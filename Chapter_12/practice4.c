#include<stdio.h>
static int num=0;
void count_num(void)
{
    num++;
    printf("I have been called for %d times\n",num);
}
int main(void)
{
    for(int i=0;i<10;i++)
        count_num();

    return 0;
}