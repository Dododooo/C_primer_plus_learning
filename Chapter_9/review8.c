
#include<stdio.h>
int sort(int a,int b,int c);
int main(void)
{
    int a,b,c;
    printf("Input 3 numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("the biggest is \n",sort(a,b,c));
}

int sort(int a,int b,int c)
{
    int max;
    if(a>b)
    {
        a=b;
        if(a>c)
        {
            max=a;
        }else
        {
            max=c;
        }
    }else
    {
        b=a;
        if(b>c)
        {
            max=b;
            
        }else
        {
            max=c;
        
        }
    }
    return max;
}