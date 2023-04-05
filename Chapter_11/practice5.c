#include<stdio.h>
#include<string.h>
char* stringsearch(char * st1,char ch)
{
    int index=0;
    char * ret_val;
    for(index=0;index<strlen(st1);index++)
    {
        if(st1[index]==ch)
        {
            ret_val=&st1[index];
            break;
        }
        if(index==(strlen(st1)-1))
        {
            ret_val=NULL;
        }
    }
    return ret_val;
}

int main(void)
{
    char st1[]="hello how are you";
    printf("%s",stringsearch(st1,'l'));

    return 0;
}