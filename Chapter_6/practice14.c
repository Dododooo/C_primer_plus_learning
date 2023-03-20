#include<stdio.h>
int main(void)
{
    double arr1[8];
    double arr2[8];
    int index1,index2;
    double sum;

    printf("Please enter 8 num to array:\n");
    for(index1 = 0;index1<8;index1++)
    {
        scanf("%lf",&arr1[index1]);
    }
    printf("\nThe first array as below;\n");
    for(index1 = 0;index1<8;index1++)
    {
        printf("%-8.3lf",arr1[index1]);
    }
    printf("\n");
    for(index2=1,arr2[0]=1.0;index2<8;index2++)
    {
        arr2[index2]+=arr1[index2]+arr2[index2-1];
    }
    for (index2=0;index2<8;index2++)
    {
        printf("%-8.3lf",arr2[index2]);
    }
    
}