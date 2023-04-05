#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ANSWER "grant"
#define SIZE 40

char * s_gets(char * st,int n);

int main(void)
{
    char try[SIZE];
    char * ptr;

    puts("Who is burried in graant's tomb");
    s_gets(try,SIZE);
    ptr=try;
    while(*ptr)
    {
        *ptr=(tolower((char)*ptr));
        ptr++;
    }

    while(strcmp(try,ANSWER))
    {
        puts("No,that wrong,try again:");
        s_gets(try,SIZE);
        ptr=try;
        while(*ptr)
        {
        *ptr=(tolower((char)*ptr));
        ptr++;
        }
    }
    puts("That's right!");

    return 0;
}

char * s_gets(char * st,int n)
{
    char *ret_val;
    int i=0;
    ret_val=fgets(st,n,stdin);

    if(ret_val)
    {
        while(st[i]!='\n'&&st[i]!='\0')
        {
            i++;
        }
        if(st[i]=='\n')
        {
            st[i]='\0';
        }
        else{
            while(getchar()=='\n')
            {
                continue;
            }
        }
        
    }
    return ret_val;
}