#include<stdio.h>

int main(void)
{
    char ch;
    while((ch=getchar())!='#')
    {
        if(ch!='b')
        break;
        if(ch!='\n')
        {
            printf("Step 1\n");
            switch(ch)
            {
                case 'c':
                break;
                case 'h':
                printf("Step3\n");
                break;
                default:
                printf("Step2\n");
                printf("Step3\n");
            }

        }

    }
    printf("Done\n");

    return 0;
}