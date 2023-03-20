#include<stdio.h>
void displayMenu();
int main(void)
{
    int type;
    float paid,tex_paid;
    float tex;
    displayMenu();
    while(scanf("%d",&type))
    {
        if(type==5)
            break;
        else if(type<5)
        {
            printf("Please enter paid:");
            scanf("%f",&paid);
            switch(type)
            {
                case 1:
                {
                    tex=(paid>17850?0.28*(paid-17850)+0.15*17850:paid*0.15);
                    break;
                }
                case 2:
                {
                    tex=(paid>17850?0.28*(paid-17850)+0.15*17850:paid*0.15);
                    break;
                }
                case 3:
                {
                    tex=(paid>17850?0.28*(paid-17850)+0.15*17850:paid*0.15);
                    break;
                }
                case 4:
                {
                    tex=(paid>17850?0.28*(paid-17850)+0.15*17850:paid*0.15);
                    break;
                }
            
            }
            tex_paid=paid-tex;
            printf("tex=%f,paid after tex=%f\n",tex,tex_paid);
            displayMenu();
            continue;



        }else
        {
            printf("Invalid input,try again\n");
            displayMenu();
            continue;
        }

        

    }
    printf("Leaving\n");

}

void displayMenu()
{   
    int index;
    char *type[]={"Single","Owner","Married","Divorced"};
    for(index=0;index<40;index++)
        putchar('*');
    putchar('\n');
    printf("Enter the type you are in\n");
    for(index=0;index<4;index++)
    {
        printf("%d) %s",index+1,type[index]);
        printf("        ");
        if(index==1||index==3)
        putchar('\n');
    }
    printf("5) quit\n");
    for(index=0;index<40;index++)
        putchar('*');
    putchar('\n');

}