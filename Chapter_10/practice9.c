#include<stdio.h>
void displayStr(int row,int col,double arr[row][col]);
void cpy_str(int row,int col,double arr1[row][col],double arr2[row][col]);
int main(void)
{
    double arr[3][5]=
        {
            {1,2,3,4,5},
            {6,7,8,9,10},
            {11,12,13,14,15}
        };
    int row=3;
    int col=5;

    double cpyStr[row][col];
    cpy_str(3,5,arr,cpyStr);
    displayStr(3,5,arr);
    displayStr(3,5,cpyStr);

    return 0;
}
void displayStr(int row,int col,double arr[row][col])
{
    int rows,cols;
    for(rows=0;rows<row;rows++)
    {
        for(cols=0;cols<col;cols++)
        {
            printf("%5.1lf",arr[rows][cols]);
        }
        putchar('\n');
    }
    putchar('\n');
}
void cpy_str(int row,int col,double arr1[row][col],double arr2[row][col])
{
    int rows,cols;
    for(rows=0;rows<row;rows++)
    {
        for(cols=0;cols<col;cols++)
        {
            arr2[rows][cols]=arr1[rows][cols];
        }
    }
}