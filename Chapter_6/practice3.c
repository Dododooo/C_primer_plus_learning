#include<stdio.h>
int main(void)
{
    const int ROW = 6;
    const int COL =6;
    int row;
    int col;
    for (row=0;row<ROW;row++)
    {
        for(col=0;col<=row;col++)
        {
            printf("%c",'F'-col);
        }
        printf("\n");
    }

    return 0;
}