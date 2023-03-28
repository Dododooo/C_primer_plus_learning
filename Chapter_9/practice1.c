#include<stdio.h>
double min(double x,double y)
{
    return (x>y?y:x);
}

int main(void)
{
    double x=1.5;
    double y=2.2;
    printf("min=%.2lf",min(x,y));
}