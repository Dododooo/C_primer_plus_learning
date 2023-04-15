#include<stdio.h>
#include<stdlib.h>
void genNum(int max,int * arr)
{
    for(int i=0;i<max;i++)
    {
        arr[i]=rand()%20;
    }
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void sort_arr(int *arr,int size)
{
    int temp;
    int i,j;
    i=j=0;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void displayArr(int * arr,int size)
{
    for(int i=0;i<40;i++)
    {
        putchar('*');
    }
    putchar('\n');
    for(int i=0;i<size;i++)
    {
        printf("%-1d\n",arr[i]);
    }
    for(int i=0;i<40;i++)
    {
        putchar('*');
    }
    putchar('\n');
}

int main(void)
{
    int arr[100];
    genNum(100,arr);
    displayArr(arr,100);
    sort_arr(arr,100);
    displayArr(arr,100);


    return 0;
    
}