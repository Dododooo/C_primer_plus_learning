#include<stdio.h>
void displayMenu(void);
#define ATIME 1.5
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25

int main(void)
{
    int BASE;
    int choice;
    int hours;
    int paid;
    int paid_taxed;
    int tax;
    int index;
    float arr[5]={8.75,9.33,10.00,11.20};
    

    displayMenu();
    while(scanf("%d",&choice))
    {
        switch(choice)
        {
            case 1:
                BASE=arr[0];
                break;
            case 2:
                BASE=arr[1];
                break;
            case 3:
                BASE=arr[2];
                break;
            case 4:
                BASE=arr[3];
                break;
            case 5:
                printf("Bye");
                break;
            default:
                printf("Enter the right num\n");
                continue;
        }
        if(choice!=5)
        {

            printf("Please enter hours  you work during aweek");
            scanf("%d",&hours);
            if (hours >40)
            {
                paid= (ATIME * (hours-40)+hours)*BASE;
            }else if(hours<=40 && hours>0)
            {
                paid = BASE *hours;
            }else
            {
                printf("in valid input\n");
            }
            if (paid<300)
            {
                tax=RATE1*paid;
                paid_taxed=paid-tax;
                
            }else if(paid <450)
            {
                tax=(300*RATE1+(paid-150)*RATE2);
                paid_taxed=paid-tax;
            }else
            {
                tax=(300*RATE1+150*RATE2+RATE3*(paid-450));
                paid_taxed=paid-tax;
            }
            printf("you got %d paid after cost %d tax,totallyis %d \n",paid_taxed,tax,paid);
            printf("NEXT ROUND\n");
            displayMenu();
            continue;
        }

        break;
        
    }

    
    quit: printf("quiting...\n");
    return 0;

}

void displayMenu()
{   
    int index;
    float arr[5]={8.75,9.33,10.00,11.20};
    for(index=0;index<40;index++)
        putchar('*');
    putchar('\n');
    printf("Enter the number corresponding to the desired pay rate or action\n");
    for(index=0;index<4;index++)
    {
        printf("%d) $%.2f/hr",index+1,arr[index]);
        printf("        ");
        if(index==1||index==3)
        putchar('\n');
    }
    printf("5) quit\n");
    for(index=0;index<40;index++)
        putchar('*');
    putchar('\n');

}