#include<stdio.h>
#include<stdbool.h>
bool isPrime(long num);
int main(void)
{
    long num;
    printf("Please enter an integer for analysis:\n");
    printf("Enter q to quit\n");

    
    while(scanf("%ld",&num))
    {
        
        if(isPrime(num))
        {
            printf("This number%ld is a prime.\n",num);
        }
        printf("Please enter another integer:\n");



    }
    printf("Bye");
    return 0;
}

bool isPrime(long num)
{
    bool isPrime;
    long div;
    for (div = 2,isPrime = true;(div*div)<=num;div++)
        {
            if (num%div==0)
            {
                if((div*div)!=num)
                {
                    printf("%ld is fivisible by %ld and %ld.\n",num,div,num/div);

                }
                else
                {
                    printf("%ld is divisible by %ld,\n",num,div);
                }
                isPrime=false;
            }
        }
    return isPrime;
}