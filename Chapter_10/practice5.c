#include<stdio.h>
double max_min(double * arr,int n)
{
    int index;
    double max=arr[0];
    double min=arr[0];
    for(index=0;index<n;index++)
    {
        if(arr[index]>max)
            max=arr[index];
        if(arr[index]<min)
            min=arr[index];
    }
    return max-min;
}