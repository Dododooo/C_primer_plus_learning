#include<stdio.h>
void copy_ptrs(double *arr1,double *arr2,double *end);
int main(void)
{
    double arr2d[3][4]=
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int row;
    int col;
    
    double cpyarr[3][4];
    for(row=0;row<3;row++)
    {
        copy_ptrs(cpyarr[row],arr2d[row],*(arr2d+row)+4);//这里一开始写的end位置为(*arr2d+row)+4错了
    }

    for(row=0;row<3;row++)
    {
        for(col=0;col<4;col++)
        {
            printf("|%5.0lf|",cpyarr[row][col]);
        }
        putchar('\n');
    }

    return 0;

}

void copy_ptrs(double *arr1,double *arr2,double *end)
{
    int index;
    while(arr2<end)
    {
        *arr1=*arr2;
        arr1++;
        arr2++;
    }
}
