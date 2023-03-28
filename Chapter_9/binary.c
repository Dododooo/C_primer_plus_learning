#include <stdio.h>
void to_binary(unsigned long n);
int Fibonnachi(int n);
int main(void)
{
    unsigned long number;
    int index;
    printf("Enter an integer(q to quit)\n");
    while (scanf("%ld",&number))
    {
        printf("Binary equivalent:\n");
        to_binary(number);
        putchar('\n');
        for(index=1;index<=number;index++)
            printf("Fibbonachi=%-5d",Fibonnachi(index));
        putchar('\n');
        printf("Please enter another integet\n");
    }
    printf("Bye\n");

    return 0;

}

void to_binary(unsigned long n)
{
    int r;

    r=n%2;
    if(n>=2)
        to_binary(n/2);
    putchar(r==0?'0':'1');
}

int Fibonnachi(int n)
{
    if(n>2)
        return Fibonnachi(n-1)+Fibonnachi(n-2);
    else
        return 1;
}