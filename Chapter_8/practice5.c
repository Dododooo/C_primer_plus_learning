#include<stdio.h>
int main(void)
{
    int guess = 50;
    char response;
    int low=0;
    int high=100;
    int medium;
    printf("Pick an integer from 1 to 100.Iwill try to guess");
    printf("it .\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh .. is your number %d?\n",guess);
    while((response=getchar())!='y')        //获取输入直到为y跳出循环
    {
        if(response=='n')           //为n时进入循环
        {
            medium=(high+low)/2;
            printf("well ,then ,is it bigger(b)or smaller(s)?\n");
            while((response=getchar())=='\n')
            {
                continue;
            }
            // if(response=='b')
            // {
            //     low=medium;
            //     medium=(low+high)/2;
            //     putchar('b');
            // }
            // else if(response=='s')
            // {
            //     high=medium;
            //     medium=(low+high)/2;
            //     putchar('s');
            // }
            // else
            // {
            //     printf("please enter again\n");
            //     continue;
            // }

            switch (response)
            {
            case 'b':
                low=medium;
                medium=(low+high)/2;
                break;
            case 's':
                high=medium;
                medium=(low+high)/2;
                break;
            default:
                printf("please enter again\n");
                continue;
                break;
            }
        
        printf("well is it %d?",medium);
        }
    }

    printf("I knew I could do it!\n");

    return 0;
    
}