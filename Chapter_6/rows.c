#include<stdio.h>
#define ROWS 8
#define CAHRS 15

int main(void)
{
    // int row;
    // char ch;

    // for (row = 0;row <ROWS;row++)
    // {
    //     for (ch='A';ch<('A'+CAHRS);ch++)
    //     {
    //         printf("%c",ch);
    //     }
    //     printf("\n");
    // }
    // return 0;

    int row; 
    char ch;
    for (row = 0; row<ROWS;row++)
    {
        for (ch = ('A'+row);ch<('A'+CAHRS);ch++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}