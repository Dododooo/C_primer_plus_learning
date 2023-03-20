#include<stdio.h>
const double RATE = 0.05;
int main(void)
{
    float value=100.0;
    int year;
    for(year=1;value>0.0;year++)
    {
        value+=(value*RATE);
        value-=10.0;
        printf("%5d %5.2f\n",year,value);
    }
    printf("It gonna take %d",year);

    return 0;
}