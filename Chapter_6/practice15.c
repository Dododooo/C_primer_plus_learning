#include<stdio.h>
#include<string.h>

// char read_input(void);

int main(void)
{
    char string[255];
    int index;
    int strlength;
    char nstring[255];
    int status=0;

    printf("Please enter charactors\n");
    index=0;

    do
    {
        
        scanf("%c",&string[index]);
        status=(string[index]!='\n');
        index++;
        /* code */
    } while (status);
    

    

    strlength=strlen(string);

    printf("The string you input is:\n");
    printf("\n%s",string);
    printf("\nThe revert string is:\n");
    for(index--;index>=0;index--)
    {
        printf("%c",string[index]);
    }
    


    return 0;

}

// char read_input(void)
// {
//     int index;
//     char str[20];
//     int status;
//     printf("Please enter charactors\n");
//     do
//     {
//         index=0;
//         scanf("%c",&str[index]);
//         status=str[index];
//         index++;
//     }while(status!='\n');
//     return str;
// }