#include<stdio.h>
void copy_ptrs(double *arr1,double *arr2,double *end);
int main(void)
{
    double arr[7]={1,2,3,4,5,6,7};
    double cpy_arr[3];
    int index;
    copy_ptrs(cpy_arr, (arr+2),arr+5);
    for(index=0;index<3;index++)
    {
        printf("%4.0lf",cpy_arr[index]);
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