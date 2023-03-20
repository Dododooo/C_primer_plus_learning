#include<stdio.h>
int main(void)
{
    int n,m,o;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d",&n,&m,&o);
    printf("The last integer was %d %d %d\n",n,m,o);

    return 0;


}