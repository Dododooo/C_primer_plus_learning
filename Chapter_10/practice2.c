#include<stdio.h>
void copy_arr(double arr1[],double arr2[],int num);
void copy_ptr(double *arr1,double *arr2,int num);
void copy_ptrs(double *arr1,double *arr2,double *end);

int main(void)
{
    double source[5]={1.1,2.2,3.3,4.4,5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    int index;
    copy_arr(target1,source,5);
    copy_ptr(target2,source,5);
    copy_ptrs(target3,source,source+5);
    printf("Source :\n");
    for(index=0;index<5;index++)
        printf("%5.1lf",source[index]);
    
    printf("\nTarget1 :\n");
    for(index=0;index<5;index++)
        printf("%5.1lf",target1[index]);
       
    printf("\nTarget2 :\n");
    for(index=0;index<5;index++)
        printf("%5.1lf",target2[index]);
    
    printf("\nTarget3 :\n");
    for(index=0;index<5;index++)
        printf("%5.1lf",target3[index]);  

    return 0;      
}
void copy_arr(double arr1[],double arr2[],int num)
{
    int index;
    for(index=0;index<num;index++)
    {
        arr1[index]=arr2[index];
    }

}
void copy_ptr(double *arr1,double *arr2,int num)
{
    int index;
    for(index=0;index<num;arr1++,arr2++,index++)
    {
        *arr1=*arr2;
    }

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

