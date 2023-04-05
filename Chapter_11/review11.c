#include<string.h>
#include<stdio.h>
char *s_gets(char * st,int n)
{
    char * ret_val;
    int i=0;

    ret_val=fgets(st,n,stdin);
    if(ret_val)
    {
        i=strchr(st,'\n');
        if(st[i]=='\n')
        {
            st[i]='\0';
        }else
        {
            while(getchar()!='\n')
            continue;
        }
    }
    return ret_val;
}