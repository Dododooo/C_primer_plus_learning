#include<stdio.h>
int main(void)
{
    char ch;
    int trans_num=0;
    while((ch=getchar())!='#')
    {
        if(ch=='!')
        {
            printf("!!");
            trans_num++;
        }else if(ch=='.')
        {
            ch='!';
            putchar(ch);
            trans_num++;
        }else
        {
            putchar(ch);
        }
    }
    printf("Done,transnum=%d",trans_num);
}