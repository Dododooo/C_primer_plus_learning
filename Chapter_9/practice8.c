#include<stdio.h>
double power(int n,int m)
{
    double power;
    int flag=1;
    int index;
    if(n==0&m==0)
    {
        printf("Undefined errror");
        return 1;
    }
    if(m==0)
    {
        power=1;
    }
    if(n<0&&m%2==1)
    {
        flag=-1;
    }
    for(index=0,power=1;index<m;index++)
    {
        power*=n;
    }
    return power;
}

int main(void)
{
    int n,m;
    printf("Please enter 2 numbers\n");
    while(scanf("%d %d",&n,&m)==2)
    {
        printf("the %d^%d=%.2lf\n",n,m,power(n,m));
        printf("Please eneter another 2 integers:\n");
    }
    return 0;

}