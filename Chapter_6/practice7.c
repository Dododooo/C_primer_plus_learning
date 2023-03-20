#include<stdio.h>
#include<string.h>

int main(void)
{
    char word[10];
    int index;
    
    printf("Please enter the word:\n");
    scanf("%s",word);
    for(index=0;index<=strlen(word);index++)
    {
        printf("%c",word[strlen(word)-index]);
    }
    printf("\n");
    return 0;
}