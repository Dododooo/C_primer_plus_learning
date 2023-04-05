#include<stdio.h>
#include<string.h>
char * getall(char * st,int n)
{
    int index=0;
    do
    {
        st[index]=getchar();
    } while (st[index]!=EOF&&++index<n);
    return st;
}

int main(void)
{
    char st[5];

    getall(st,5);
    printf("%s\n",st);
    
    return 0;
}