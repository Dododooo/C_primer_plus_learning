#include<stdio.h>
#include<ctype.h>
char get_first(void);
int main(void)
{
    char ch;
    ch=get_first();
    putchar(ch);

    return 0;
}

char get_first(void)
{
    int ch;
    
    while (isspace(ch=getchar()))
    {
        continue;
    }
    return ch;
}