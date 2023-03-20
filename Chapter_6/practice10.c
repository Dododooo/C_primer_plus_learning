#include<stdio.h>
int square_sum(int a,int b);
int main(void)
{
    int low_v,upper_v;
    int count,status;
    printf("Enter lower and upper integer limits:\n");
    scanf("%d %d",&low_v,&upper_v);
    status=(upper_v-low_v);
    while(status>0)
    {
        printf("The sums of squares from %d to %d is %d\n",low_v*low_v,upper_v*upper_v,square_sum(low_v,upper_v));
        printf("Please enter next set of limits\n");
        scanf("%d %d",&low_v,&upper_v);
        status=(upper_v-low_v);
    }
    printf("Leaving");

}

int square_sum(int a,int b)
{
    int count,sum;
    for(count=a,sum=0;count<=b;count++)
    {
        sum+= count*count;
    }
    return sum;
}