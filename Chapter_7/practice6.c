#include<stdio.h>
int main(void)
{
    char ch;
    char prev='#';
    int count=0;
    while((ch=getchar())!='#')
    {
        if(prev=='e'&&ch=='i')
        {
            count++;
        }
        prev=ch;
        putchar(ch);
    }
    printf("Done,count num is=%d",count);

    return 0;
}