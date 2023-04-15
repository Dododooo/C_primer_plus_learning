#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define maxWordSize 20
int main(void)
{
    int wordcount=0;
    char tempChar[maxWordSize];
    int i=0;

    puts("How many words do you wanna input?");
    while(scanf("%d",&wordcount)==1)
    {
        if(wordcount<1)
        {
            puts("Invalid input try again");
            continue;
        }
        break;
    }
    char ** pt=(char **)malloc(wordcount*(sizeof(char*)));
    puts("Please enter your words");
    for(int i=0;i<wordcount;i++)
    {
        scanf("%s",tempChar);
        int length=strlen(tempChar);
        char * str=(char*)malloc(length*sizeof(char));
        strcpy(str,tempChar);
        *(pt+i)=str;
    }


    // while(fgets(tempChar,maxWordSize,stdin)&&i<wordcount)
    // {
    //     strcpy(pt[i],tempChar);
    //     i++;
    // }
    puts("Here are your words");
    for(int i=0;i<wordcount;i++)
        puts(pt[i]);
    free(pt);

    return 0;
}