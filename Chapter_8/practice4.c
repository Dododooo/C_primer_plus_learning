#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>



int main(void)
{
    char ch;
    int index;
    int w_num=0;
    int c_sum=0;
    int c_num=0;
    for(index=0;(int)(ch=getchar())!=EOF;index++)
    {

        if(isspace(ch))
        {
            w_num++;
            c_sum+=index;
            index=0;
        }

    }
    printf("It has %d charaters inaverage for each word",c_sum/w_num);
}