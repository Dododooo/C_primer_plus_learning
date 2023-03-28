#include <stdio.h>
void pr_char(int i,int j,char ch)
{
    int row,col;
    for(row=0;row<j;row++)
    {
        for(col=0;col<i;col++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}