#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    int ch_num=0;
    printf("Enter string(# to quit):\n");
    while((ch=getchar())!='#')
    {

        
        if('\n'==ch)
        {
            continue;
        }
        if ((ch_num%8==0)&&(ch_num!=0))
        {
           putchar('\n');
        }
        putchar(ch);
        printf("=%-3d",ch);
        ch_num++;
    }
    printf("Done\n");
    return 0;
}