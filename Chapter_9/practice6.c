#include<stdio.h>
double sort(double * a,double * b,double * c)
{
    double min,middle,max;
    if(*a>*b)
    {
        min=*b;
        if(*a<*c)
        {
            middle=*a;
            max=*c;
        }else
        {
            max=*a;
            if(*b>*c)
            {
                middle=*b;
                min=*c;
            }
            else
            {
                min=*b;
                middle=*c;
            }
        }
    }else
    {
        min=*a;
        if(*b<*c)
        {
            middle=*b;
            max=*c;

        }else
        {
            if(*a<*c)
            {
                max=*b;
                middle=*c;
            }else
            {
                max=*b;
                min=*c;
                middle=*a;

            }
        }

    }
    *b=middle;
    *c=max;
    return min;
    
}
int main(void)
{
    double a,b,c;
    a=3;
    b=5;
    c=1;
    double sot;
    sot=sort(&a,&b,&c);
    printf("a=%.2lf,b=%.2lf,c=%.2lf,min=%.2lf",a,b,c,sot);

    return 0;
}