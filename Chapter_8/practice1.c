#include<stdio.h>
#include<stdlib.h>
int count(void);

int main(void)

{
    count();
    return 0;
}
int count(void)
{
    int ch_count=0;
    int l_count=1;
    int ch;
    FILE * fp;
    fp=fopen("essay","r");
    while((ch=getc(fp))!=EOF)
    {
        if(ch=='\n')
        {
            l_count++;
            continue;
        }
        ch_count++;
    }
    printf("%d,%d",ch_count,l_count);
    exit(1);

    return l_count;
}