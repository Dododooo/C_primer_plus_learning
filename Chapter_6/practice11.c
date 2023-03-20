#include<stdio.h>
#include<string.h>
int main(void)
{
    int arr[8];
    int index;
    
    printf("Please enter 8 numbers into array:\n");
    for(index=0;index<8;index++)
    {
        scanf("%d",&arr[index]);
    }
    printf("Reverting as below:\n");
    for(index=7;index>=0;index--)
    {
        printf("%-3d",arr[index]);
    }
    printf("\n");
    
    return 0;

}