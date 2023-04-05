#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(int argc,char * argv[])
{
    int i=0;
    int b=0;
    for(i=argc-1;i>0;i--)
    {
        printf("%s",argv[i]);
        putchar(' ');
        
    }

    return 0;
    
    





}