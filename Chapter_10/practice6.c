#include<stdio.h>
void revertStr(double * arr,int n)
{
    int index;
    double copyStr[n];
    for(index=0;index<n;index++)
    {
        copyStr[index]=arr[index];
    }
    for(index=0;index<n;index++)
    {
            arr[index]=copyStr[n-index-1];
    }

}