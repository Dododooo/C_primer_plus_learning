#include <stdio.h>
#include <iostream>

int main(void)
{
    int num;
    num = 1;
    int i = 0;
    while(i < 10){
        i = i+1;
        printf("I am a simple ");
        printf("computer.\n"); //这是单行注释
        /*这是多行注释*/
        printf("My favorite number is %d because it is first. \n",num+i);
    }
    return 0;
    
}