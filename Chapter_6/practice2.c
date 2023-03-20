#include<stdio.h>
int main(void)
{
    const int ROW = 5;
    const int COL =5;
    int row;
    int col;
    for (row=0;row<ROW;row++)
    {
        for(col=0;col<=row;col++)
        {
            printf("$");
        }
        printf("\n");
    }

    return 0;
}