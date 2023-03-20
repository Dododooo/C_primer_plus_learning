#include<stdio.h>
int main(void)
{
    int num;
    int e_num,o_num;
    float e_avg,o_avg;
    int e_sum,o_sum;
    e_num=o_num=o_sum=e_sum=0;

    printf("Please enter numbers \n");

    while(scanf("%d",&num))
    {
        if(num==0)
        {
            break;
        }
        if(num%2==1)
        {
            e_num++;
            e_sum+=num;
        }
        else if(num%2==0)
        {
            o_num++;
            o_sum+=num;
        }
        else
        {
            printf("we dont accept this charactor;\n");
        }

    }
    printf("input complete\n");
    e_avg=e_sum/e_num;
    o_avg=o_sum/o_num;
    printf("evan num=%d,evan_avg=%d,odd num=%d,odd avg=%d",e_num,e_avg,o_num,o_avg);

}