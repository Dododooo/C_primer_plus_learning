#include<stdio.h>
#define MONTHs 12
int main(void)
{
    int const days[MONTHs]={31,28,31,30,31,30,31,31,30,31,30,31};
    int index;
    for(index=0;index<MONTHs;index++)
    {
        printf("month %2d has %2d\n",index+1,days[index]);
    }

    return 0;
}