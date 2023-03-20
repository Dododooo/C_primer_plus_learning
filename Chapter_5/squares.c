#include <stdio.h>
int square(int a, int b);

int main(void)
{
    int num = 2;
    int squ;
    int i=1;
    int res;
    
    printf("please enter the num and it square number");
    scanf("%d %d",&num,&squ);
    res = square(num,squ);
    printf("THe square of num is %d",res);
}

int square(int a,int b)
{
    int count=1;
    int aa = a;
    while(count<b)
    {
        a = a * aa;
        count++;
    }
    return a;
}