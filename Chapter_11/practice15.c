#include<stdio.h>
#include<string.h>
#include<ctype.h>
int atoint(char * st)
{
    int result=0;
    int i=0;
    int ten;
    int n=1;
    char ch;
    for(i=0;i<strlen(st);i++)
    {
        if(!isnumber(st[i])&&st[i]!='\0')
        {
            result=0;
            break;
        }
        for(ten=0,n=1;ten<strlen(st)-i-1;ten++)
        {
            n*=10;
        }
        result+=(n*((int)st[i]-48));

    }
    return result;

}

int main(void)
{
    char st[]="4875";
    printf("%d",atoint(st));

    return 0;
}