#include<stdio.h>
#include<stdlib.h>
#define LIM 30
#include "s_gets.c"
int main(void)
{
    char number[LIM];
    char * end;
    long value;

    puts("ENter a number (empty line to quit )");
    while(s_gets(number,LIM)&& number[0]!='\0')
    {
        value = strtol(number,&end,10);
        printf("base 10 input ,base 10 output:%ld,stopped at %s (%d)\n",value,end,*end);
        value=strtol(number,&end,16);
        printf("Base 16 input,nase 10 ouput :%ld,stopped at %s (%d)\n",value,end,*end);
        puts("Next number");
    }

    puts("Bye!");

    return 0;
}