#include <stdio.h>
int main(void)
{
    
    int x = 100;
    printf("please input the num you want to transform:");
    scanf("%d",&x);
    printf("dec = %d; octal = %o; hex= %x\n",x,x,x);
    printf("dec = %d, pctal = %#o; hex= %#x\n",x,x,x);
    return 0;
}