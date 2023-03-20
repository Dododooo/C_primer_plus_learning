#include<stdio.h>
int main(void)
{
    int arr[8];
    int index;
    int multi;
    int i;

    for(index=0;index<8;index++)
    {
        for(i=1,multi=1;i<=index;i++)
        {
            multi*=2;
        }
        arr[index]= multi;
        
    }
    index = 0;
    do
    {
        printf("%-7d",arr[index]);
        index++;
    }while(index<8);

    printf("\n");
    return 0;
}