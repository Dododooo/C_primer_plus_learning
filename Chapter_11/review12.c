#include<stdio.h>
#include<string.h>
char * findspace(char * st)
{
    int index;
    char * ret_val;
    for(index=0;index<strlen(st);index++)
    {
        if(st[index]==' ')
        {
            ret_val=st+index;
            break;
        }
        if(st[index]=='\0')
        {
            ret_val=NULL;
        }
    }


    return ret_val;
}

int main(void)
{
    char str[]="hellodwak";
    puts(findspace(str)-1);
    return 0;
}