#include <stdio.h>
#define PRAISE "You are an extraodinary being."

int main(void)
{
    char name[40];
    printf("What's your name?");
    scanf("%s",name);
    printf("Hello , %s.%s\n",name,PRAISE);

    printf("done\n");
    return 0;
}
