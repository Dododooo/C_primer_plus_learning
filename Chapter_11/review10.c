#include <stdio.h>

int stringlen(char * st)
{
    int count;
    while(st[count]!='\0')
    {
        count++;
    }
    return count;
}

int main(void)
{
    char st[]="hello";

    printf("%d",stringlen(st));

    return 0;
}