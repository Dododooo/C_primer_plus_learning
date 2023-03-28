#include<stdio.h>
void largeof(double * a ,double * b)
{
    *a=*b=(*a>*b?*a:*b);
}

int main(void)
{
    double a=3.0;
    double b=5.0;
    largeof(&a,&b);
    printf("large%lf,%lf",a,b);

    return 0;
}