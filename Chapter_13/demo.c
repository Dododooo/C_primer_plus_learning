#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE *p;
    int ch;
    p=fopen("./text","r+");
    putc('h',p);
    fputs("ABCDE",p);

    while((ch=getc(p))!=EOF)
    {
        putc(ch,stdout);
    }

    fflush(p);
    fclose(p);


    return 0;

}