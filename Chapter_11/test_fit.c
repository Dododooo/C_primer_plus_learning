#include<stdio.h>
#include<string.h>
void fit(char * st,int size);
int main(void)
{
    char mesg[]="Things shoul be as simple as possible,"
    " but not simpler";

    puts(mesg);
    fit(mesg,38);
    puts(mesg);
    puts("Let's look at some more of the string");
    puts(mesg+39);

    return 0;


}

void fit(char * st,int size)
{
    if(strlen(st)>size)
    {
        st[size]='\0';
    }
}