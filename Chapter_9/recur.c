#include<stdio.h>
void up_and_down(int);
void printa(int n);

int main(void)
{
    up_and_down(1);
    putchar('\n');
    printa(1);

    return 0;
}

void up_and_down(int n)
{
    printf("Level %d:n location %p\n",n,&n);
    if(n<4)
        up_and_down(n+1);
    printf("LEVEL %d:n location %p\n",n,&n);
}

void printa(int n)
{
    int index;
    for(index =n;index<4;index++)
    {
        printf("level %d location%p\n",index,&index);
    }
}