#include<stdio.h>
void displayreciept();

void displayMenu(void)
{   
    int index;
    char *type[]={"artichoke","beet","carrot"};
    for(index=0;index<40;index++)
        putchar('*');
    putchar('\n');
    printf("Enter the type you bought in\n");
    for(index=0;index<3;index++)
        printf("%c)%s\n",index+97,type[index]);
    putchar('\n');
    for(index=0;index<40;index++)
        putchar('*');
    putchar('\n');

}

int main(void)
{
    char type;
    float price_s[]={2.05,1.15,1.09};
    float fee_total_before;
    float freight;
    float discount=1;
    float a_pound,b_pound,c_pound;
    float fee_a,fee_b,fee_c;
    float pound_sum;
    float disfee;
    float fee;
    int index;

    displayMenu();
    while(scanf("%c",&type))
    {
        if(type=='\n')
        
        {
            continue;
        }
        switch (type)
        {
            case 'a':
            {
                printf("Please enter the artichoke pound");
                scanf("%f",&a_pound);
                break;
            }
            case 'b':
            {
                printf("Please enter the beet pound");
                scanf("%f",&b_pound);
                break;
            }
            case 'c':
            {
                printf("Please enter the carrot pound");
                scanf("%f",&c_pound);
                break;
            }
            case 'q':
            {
                printf("OUTputting...\n");
                break;
            }
            default:
            {
                printf("unknown input,input again\n");
                break;
            }
        }
        if(type=='q')
        {
            break;
        }else

        { 
            displayMenu();
            putchar('\n');
            continue;        
        }
        

    }
    fee_total_before=a_pound*price_s[0]+b_pound*price_s[1]+c_pound*price_s[2];
    pound_sum=a_pound+b_pound+c_pound;
    if (pound_sum<=5)
        freight=6.5;
    else if(pound_sum<=20)
    {
        freight=14;
    }else 
    {
        freight= 14+ (pound_sum-20)*0.5;
    }


    if(fee_total_before>100)
    {
        discount=0.95;
    }
    disfee=discount*fee_total_before;
    fee=fee_total_before+freight-fee_total_before;
    for(index=0;index<40;index++)
        putchar('-');
    putchar('\n');
    printf("Sum fee:%20.2f\nartichoke pound:%20.2f\nartichoke singlefee:%20.2f\nbeet pound: %20.2f\nbeet singlefee:%20.2f\n",fee,a_pound,price_s[0],b_pound,price_s[1]);
    printf("carrot pound:%20.2f \ncarrot singlefee:%20.2f\nVegetable fee:%20.2f\nDiscount:%20.2f\nfreight:%20.2f\n",c_pound,price_s[2],fee_total_before,disfee,freight);

    for(index=0;index<40;index++)
        putchar('-');
    putchar('\n');

    return 0;


}




