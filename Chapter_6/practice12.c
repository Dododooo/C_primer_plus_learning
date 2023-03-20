#include<stdio.h>
int main(void)
{
    int upper_lim;
    int index;
    int symbol=-1;
    int count;
    float base=1.0;
    int status;
    float sum;
    

    printf("Please enter the times(q to quit):\n");
    status=scanf("%d",&upper_lim);     //输入上限
    while(status)
    {
        for(sum=0.0,count=1;count<=upper_lim;count++)
        {
            sum+= base / (float)count;
            // printf("%-3f\n",sum);
        }
        printf("the first result is %f\n",sum);

        for(sum=0.0,count=1;count<=upper_lim;count++)
        {
            if(count%2==1)
            {
                sum += base/((float)count);
            }
            else 
            {
                sum +=base/(symbol*count);
            }
        }
        printf("the second result is %f\n",sum);
        printf("Enter another limit\n");
        status=scanf("%d",&upper_lim);
    }
    return 0;

}