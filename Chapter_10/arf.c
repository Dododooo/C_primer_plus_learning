#include<stdio.h>
#define SIZE 5
void show_array(const double ar[],int n);
void mult_array(double ar[],int n,double mult);

int main(void)
{
    double dip[SIZE]={20.0,17.99,8.2,15.3,22.22};

    printf("The original idp array:\n");
    show_array(dip,SIZE);
    mult_array(dip,SIZE,2.5);
    printf("\nThe  dipp array after multi:\n");
    show_array(dip,SIZE);

    return 0;
}
void show_array(const double ar[],int n)
{
    int index;
    for(index=0;index<n;index++)
    {
        printf("%8.3lf",ar[index]);
    }
}


void mult_array(double ar[],int n,double mult)
{
    int index;
    for(index=0;index<n;index++)
    {
        ar[index]*=mult;
    }
}