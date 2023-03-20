#include <stdio.h>
#include<string.h>
#define PRAISE "You are a extraodinary being."

int main(void)
{
    char name[40];

    printf("What is your name?\n");
    scanf("%s",name);

    printf("Hello,%s.%s\n",name,PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name),sizeof(name));
    printf("The phrase of praise has %zd letters",strlen(PRAISE));
    printf("and occupies %zd memory cells.\n",sizeof(PRAISE));

    printf("done\n");
    return 0;
}
