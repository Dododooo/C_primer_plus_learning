#include<stdio.h>
double Cal(float a,float b);
int main()
{
    float num_1,num_2;
    int status;
    printf("Please enter 2 float nums,q to quit\n");
    status=scanf("%f %f",&num_1,&num_2);
    while(status>1)
    {
        
        printf("result = %f\n",Cal(num_1,num_2));
        printf("Please enter another value\n");
        status=scanf("%f %f",&num_1,&num_2);
        
    }
    printf("Leaving\n");
    
    return 0;
}

double Cal(float a,float b)
{   
    return ((a-b)/(a*b));
}