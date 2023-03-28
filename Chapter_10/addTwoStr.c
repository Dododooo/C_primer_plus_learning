#include<stdio.h>
void add_two_str(int n,int * arrA,int * arrB,int *sum)
{
    int index;
    for(index=0;index<n;index++)
    {
        sum[index]=arrA[index]+arrB[index];
    }
}