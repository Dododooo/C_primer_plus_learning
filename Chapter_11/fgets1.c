#include <stdio.h>
#define STLEN 81
int main(void)
{
    char words[STLEN];

    puts("Enter a string please:");
    fgets(words,STLEN,stdin);
    printf("Your string twice (puts()),then fputs():\n");
    puts(words);
    fputs(words,stdout);
    puts("Enter another string Please:");
    fgets(words,STLEN,"./words");
    printf("Your string twice (puts()),then fputs()\n");
    puts(words);
    fputs(words,stdout);
    puts("Done .");

    return 0;
}