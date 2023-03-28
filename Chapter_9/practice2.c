#include<stdio.h>
void chline(char ch,int i,int j)
{
    int row,col;
    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}

int main(void)
{
    chline('g',3,4);
    return 0;
}