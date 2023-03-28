#include<stdio.h>
double ret_index(double * arr,int n)
{
    int index;
    double max=arr[0];
    int m_index;
    for(index=0;index<n;index++)
    {
        if(arr[index]>max)
        {
            max=arr[index];
            m_index=index;
        }
    }
    return m_index;
}