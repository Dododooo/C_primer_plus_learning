#include<stdio.h>
#include <string.h>
int stringcat( char * st1, char *st2)
{
    int i=strlen(st1);
    int n=0;
    

    for(;n<strlen(st2);i++,n++)
    {
        *(st1+i)=*(st2+n);
    }

    return (strlen(st1)+strlen(st2));
    

}

int main(void)
{
    char st1[]="how are you";
    char st2[]="I'm fine thank you";
    stringcat(st1,st2);
    puts(st1);

    return 0;
}