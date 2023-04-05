#include<stdio.h>
#include<string.h>
#include<ctype.h>
char * findword(char * st,int n)
{
    int count=0;
    int bool=0;
    char ch;
    while((ch=getchar())!=EOF &&count <n&&ch!='\n')
    {

        if(isspace(ch))
        {
            if(bool==1)
                break;
            bool=0;
            continue;
        }else
        {
            bool=1;
            st[count]=ch;
            count++;
        }
    }
    st[count+1]='\0';
    return st;
}


int main(void)
{
    char st[5];
    findword(st,5);
    puts(st);

    return 0;
}