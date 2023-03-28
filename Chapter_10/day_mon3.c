#include<stdio.h>
#define MONTH 12
int main(void)
{
    int day[MONTH]={31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for (index=0;index<MONTH;index++)
    {
        printf("%dMONTH has %d days\n",index+1,*(index+day));
    }
    return 0;
}