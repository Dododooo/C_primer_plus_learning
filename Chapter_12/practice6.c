#include<stdio.h>
#include<stdlib.h>
#include "s_and_r.c"
void genNum(int size,int * arr)
{
    for(int i=0;i<size;i++)
    {
        arr[i]=rand()%11;
    }
}
void print_count(int num,int size,int * arr)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==num)
        {
            count++;
        }
    }
    printf("%d appeared %d times\n",num,count);
}

int main(void)
{
    int arr[1000];
    genNum(1000,arr);
    for(int i=0;i<10;i++)
    {
        print_count(i,1000,arr);
    }

    return 0;
}