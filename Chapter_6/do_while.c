#include<stdio.h>
int main(void)
{
    const int secret_code=13;
    int code_entered;

    do
    {
        printf("To enter the num:\n");
        printf("please enter the secret code num:\n");
        scanf("%d",&code_entered);
        /* code */
    } while (code_entered!=secret_code);
    printf("Congratulations,you are cured!");

    
}