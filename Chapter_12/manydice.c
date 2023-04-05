#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "diceroll.h"
int main(void)
{
    int dice,roll;
    int sides;
    int status;

    srand((unsigned int )(time(0)));
    printf("ENter the number of sides per die , 0 to stop.\n");
    while(scanf("%d",&sides)==1&&sides>0)
    {
        printf("How many dice?\n");
        if((status=scanf("%d",&dice))!=1)
        {
            if(status==EOF)
                break;
            else
            {
                puts("Your should have entered an integer.");
                puts("Let's begin again");
                while(getchar()!='\n')
                    continue;

                puts("How many sides?Enter 0 to stop");
                continue;
            }
        }
        roll=roll_n_dice(dice,sides);
        printf("You have rolled a %d using %d %d-sided dice\n",roll,dice,sides);
        printf("How many sides?Enter 0 to stop.\n");

    }
    printf("the rollem()function was called %d times\n",roll_count);
    printf("GOOD FORTUNE TO YOU.\n");

    return 0;
}