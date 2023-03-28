#include<stdio.h>
void funcA(void);
int funcB(int lower,int upper);
int main(void)
{
    int num;
    funcA();
    num=funcB(1,4);
    switch (num)
    {
        case 1:
            printf("1");
            break;
        case 2:
            putchar('2');
            break;
        case 3:
            putchar('3');
            break;
        case 4:
            printf("Bye\n");
            break;
        default:
            break;
    }

    return 0;
    

}

void funcA(void)
{
    int index;
    char * str[4]={"copy files","move files","remove files","quit"};
    printf("Please Choose one of the following:\n");
    for(index=0;index<4;index++)
    {
        printf("%d)%-15s",index,str[index]);
        if(index%2==1)
            putchar('\n');
    }
    printf("Enter the number of your choice:\n");

}

int funcB(int lower,int upper)
{
    int num;
    int input;
    printf("Please enter a number:\n");
    while(scanf("%d",&num))
    {
        if(num<lower||num>upper)
        {
            funcA();
            continue;
        }
        return num;
    }
    return 4;
}