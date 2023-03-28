#include<stdio.h>
double mixAvg(double a,double b)
{
    double mixAvg;
    mixAvg=1.0/((1.0/a+1.0/b)/2);
    return mixAvg;
}
int main(void)
{

    printf("mix=%.2lf\n",mixAvg(3,4));

    return 0;

    
}