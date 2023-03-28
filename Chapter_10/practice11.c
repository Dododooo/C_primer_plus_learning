#include<stdio.h>
void display2D(int (*arr)[5],int row);
void double2D(int (*arr)[5],int row);
int main(void)
{
    int arr[3][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };
    int darr[3][5];
    display2D(arr,3);
    double2D(arr,3);
    display2D(arr,3);

    return 0;
}

void display2D(int (*arr)[5],int row)
{
    int rows,cols;
    for(rows=0;rows<row;rows++)
    {
        for(cols=0;cols<5;cols++)
        {
            printf("|%5d|",*(*(arr+rows)+cols));
        }
        putchar('\n');
    }
    putchar('\n');
}
void double2D(int (*arr)[5],int row)
{
    int rows,cols;
    for(rows=0;rows<row;rows++)
    {
        for(cols=0;cols<5;cols++)
        {
            *(*(arr+rows)+cols)*=2;
        }
    }
}
