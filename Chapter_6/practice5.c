#include<stdio.h>
int main(void)
{
    int ROW;
    char ch ='A';
    int count,row;
    char ch_enter;

    printf("Please enter the char :\n");
    scanf("%c",&ch_enter);
    ROW=(int)(ch_enter-ch+1);
    // ROW = 5;
    
    for (row = 0;row<ROW;row++)
    {
        for(count = 0;count<ROW-row;count++) //打印*
        {
            printf("*");
        }

        for(count=0;count<=row;count++)     //打印升序
        {
            printf("%c",ch+count);
        }
        for(count=0;count<row;count++)      //打印降序，实际上是错开一行打印
        {
            printf("%c",ch+count);
        }
        for(count = 0;count<ROW-row;count++)        //再次打印*
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}