#include<stdio.h>
void put1(const char * st);
int put2(const char * st);

int main(void)
{
    put1("if i'd as much money");
    put1(" as I could spend.\n");
    printf("I count %d characters.\n",put2("I never would cry old chairs to mend."));

    return 0;
}

void put1(const char * st)
{
    while(*st!='\0')
    {
        putchar(*st++);
    }
}
int put2(const char * st)
{
    int count;
    while(*st!='\0')
    {
        putchar(*st++);
        count++;
    }
    return count;
}