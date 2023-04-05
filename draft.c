#include<stdio.h>
#include<stdlib.h>
#define MONTHS 12
#define YEARS 5

int main(void)
{
    
    double * ptd;
    ptd=(double*)malloc(20*sizeof(double));
    for(int i=0;i<20;i++)
        printf("%6.1f",ptd[i]);
    free(ptd);
}