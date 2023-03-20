#include<stdio.h>
int main(void)
{
    int tran_num=0;
    char ch;
    while((ch=getchar())!='#')
    {
        switch(ch)
        {
            case '!':
                printf("!!");
                tran_num++;
                break;
            case '.':
                ch='!';
                tran_num++;
            default:
                putchar(ch);
                break;  
        }
    }
    printf("Done!trans num = %d\n",tran_num);
}