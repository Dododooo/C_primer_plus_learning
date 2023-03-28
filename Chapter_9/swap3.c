#include<stdio.h>
void interchange(int * u, int * v);

int main(void)
{
    int n=10,m=5;
    printf("n=%d,m=%d\n",n,m);
    interchange(&n,&m);
    printf("Now,n=%d,m=%d\n",n,m);

    return 0;
}

void interchange(int * u,int * v)
{
    int temp;
    temp=*u;
    *u=*v;
    *v=temp;

}