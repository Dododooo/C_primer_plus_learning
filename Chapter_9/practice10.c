#include<stdio.h>
int Fibonacci(int n);
int to_base_n(int n,int R)
{
    int num;
    
    if(n>=R)
    {       
        to_base_n(n/R,R);
        printf("%d",n%R);
    }
    else
        printf("%d",n);
    
}

int main(void)
{
    int n,R;
    int index;
    printf("Please enter 2 integers\n");
    while(scanf("%d %d",&n,&R)==2)
    {
        printf("The %d in %d is",n,R);
        to_base_n(n,R);
        putchar('\n');
        putchar('g');

    }

    printf("fibonnaci:\n");
    for(index=1;index<=10;index++)
    {
        printf("%d\n",Fibonacci(index));
    }

    return 0;
}

int Fibonacci(int n)
{
    if(n==1||n==2)
        return 1;
    else if(n<=0)   
    {
        return 0;
    }
    else
    {
        return (Fibonacci(n-1)+Fibonacci(n-2));
    }
}