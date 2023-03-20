#include<stdio.h>
#include<stdbool.h>
bool sushu(int a);
int main(void)
{
    int num;
    int index,i;
    printf("Pleas enter a number,(q to quit)\n");
    while(scanf("%d",&num))
    {
        index=0;
        if (num<=0)
        {
            printf("please enter zhengzheng value:\n");
            continue;
        }
        for(index=0;index<=num;index++)
        {
            if(sushu(index))
            {
                printf("%-5d",index);
                i++;
            }
        }
        if(i!=0)
        {
            printf("are sushu\n");
        }else if(num==2&&num==1)
        {
            printf("%dare sushu",num);
        }else
        {
            printf("No sushu ");
        }

    }
    printf("DOne");
    return 0;

}
bool sushu(int a)
{   
    int index;
    bool YON=true;
    if(a==0||a==1)
    {
        YON=false;
    }
    for(index=1;index<a;index++)
    {
        if(a%index==0&&a/index!=a)
        {
            YON=false;
            break;
        }
    }
    return YON;

}