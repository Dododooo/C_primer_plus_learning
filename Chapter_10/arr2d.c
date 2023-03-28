#include<stdio.h>
#define ROW 3
#define COL 4
void sum_rows(int ar[][COL],int rows);
void sum_cols(int ar[][COL],int rows);
int sum2d(int (*ar)[COL],int rows);

int main(void)
{
    int junk[ROW][COL]=
    {
        {2,4,6,8},
        {3,5,7,9},
        {12,10,8,6}
    };
    sum_rows(junk,ROW);
    sum_cols(junk,ROW);
    printf("Sum of all elements=%d\n",sum2d(junk,ROW));

    return 0;
}
void sum_rows(int ar[][COL],int rows)
{
    int r;
    int c;
    int total;

    for(r=0;r<rows;r++)
    {
        for(c=0,total=0;c<COL;c++)
        {
            total+=ar[r][c];
        }
        printf("The row %d :sum =%d\n",r+1,total);
    }
}
void sum_cols(int ar[][COL],int rows)
{
    int r;
    int c;
    int total;
    for (c=0;c<COL;c++)
    {
        for(r=0,total=0;r<rows;r++)
        {
            total+=ar[r][c];
        }
        printf("The col %d:sum =%d\n",c+1,total);
    }
}
int sum2d(int ar[][COL],int rows)
{
    int r;
    int c;
    int total=0;

    for(r=0;r<rows;r++)
    {
        for(c=0;c<COL;c++)
        {
            total+=ar[r][c];
        }
    }
    return total;
}

