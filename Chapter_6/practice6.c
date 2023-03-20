#include<stdio.h>
int main(void)
{
    int low_val,high_val;
    int ROW,count;
    printf("Please enter the lower value and the higher value\n");
    while(scanf("%d %d",&low_val,&high_val))
    {
        ROW=high_val-low_val;
        if(ROW<=0)
        {
            printf("Error,Please enter other nums\n");
        }
        printf("num double triple\n");
        for(count=0;count<ROW;count++)
        {
            printf("%-5d %-5d %-5d\n",low_val+count,(low_val+count)*(low_val+count),(low_val+count)*(low_val+count)*(low_val+count));
        }
    }
    return 0;
    
    

    
}