#include<stdio.h>
#include<string.h>
char * mustrcpy(char * st1,char * st2,int n)
{
    int i=0;
    char * ret_val;
    // if(strlen(st2)>=n)
    // {
    //     *(&st2[n-1])='\0';
    // }
    while(i<n)
    {
        st1[i]=st2[i];
        i++;
    }
    st1[n]='\0';
    ret_val=st1;
    return ret_val;
}

int main(void)
{
    char st1[20];
    char st2[15]="123456789!@#";

    mustrcpy(st1,st2,10);

    puts(st1);
}