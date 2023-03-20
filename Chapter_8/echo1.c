#include<stdio.h>
int main(void)
{
    int ch;
    while ((ch=getchar())!=EOF)
    {
        putchar(ch+1);
        /* code */
    }
    
    return 0;
}