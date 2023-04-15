#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "diceroll.h"

int main(void)
{
    int dice,roll;
    int sides;
    int status;
    sets=0;


    srand((unsigned int )(time(0)));
    puts("Enter the number of set,q to quit");
    while(scanf("%d",&sets)==1&&sets>0)
    {
        if(sets<1)
        {
            puts("Plase try again!");
            puts("Enter the number of set,q to quit");
            continue;
        }
        printf("ENter the number of sides per die , 0 to stop.\n");
        if(scanf("%d",&sides)==1&&sides>0)
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
            while(getchar()!='\n')
                continue;
        }
        roll=roll_n_dice(dice,sides);
        printf("You have rolled a %d using %d %d-sided dice for %d sets\n",roll,dice,sides,sets);
        printf("How many sides?Enter 0 to stop.\n");

        puts("Please enter another sets to begin,q to quit");

    }
    printf("the rollem()function was called %d times\n",roll_count);
    printf("GOOD FORTUNE TO YOU.\n");

    return 0;
}