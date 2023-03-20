#include<stdio.h>
double power(double n,int p);
int main(void)
{
    double x,xpow;
    int exp;

    printf("Enter a number and the positive integer power\n");
    printf("to which the number will be raised .Enter q");
    printf("to quit");
    while(scanf("%lf%d",&x,&exp)==2)
    {
        xpow=power(x,exp);
        printf("%.3g to the power %d is %.5g\n",x,exp,xpow);
        printf("Enter the next pair of numbers or q to quit\n");
    }
    printf("Hope you enjoyed this power trip---bye\n");

    return 0;
}

double power(double n,int p)
{
    double pow=1;
    int count;
    for (count=0;count<p;count++)
    {
        pow *=n;
    }
    return pow;
}