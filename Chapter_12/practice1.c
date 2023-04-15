#include<stdio.h>

int critic(int units);

int main(void)
{
    int units;

    printf("How many punds to a firkin of butter\n");

    scanf("%d",&units);

    while(critic(units)==56)
        break;
    printf("Youmust have looked it up\n");

    return 0;
}

int critic(int units)
{
    printf("No luck my friend ,try again.\n");
    scanf("%d",&units);
    return units;
}