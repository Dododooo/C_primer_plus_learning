#include<stdio.h>
#include<string.h>
char * string_in(char * st1,char * st2)
{
    int i=0;
    int c;
    int bool=0;
    char * ret_val=NULL;
    for(i=0;i<strlen(st1)-strlen(st2);i++)
    {
        if(st1[i]==st2[0])
        {
            for(c=0;c<strlen(st2);c++)
            {
                if(st1[i+c]==st2[c])
                    bool=1;
                else
                    bool=0;
            }
            if(bool)
                break;
        }
    }
    if(bool)
        ret_val=st1+i;
    return ret_val;
}

int main(void)
{
    char st1[]="hats";
    char st2[]="at";

    printf("%s",string_in(st1,st2));

    return 0;
}