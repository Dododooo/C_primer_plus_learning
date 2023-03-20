#include<stdio.h>
int main(void)
{
    const int ROW = 6;
    const int COL =6;
    int row;
    int col;
    char ch = 'A'-1;
    for (row=0;row<ROW;row++)
    {
        for(col=0;col<=row;col++)
        {
            ch +=1;
            printf("%c",ch);
        }
        printf("\n");
    }

    return 0;
}