#include <stdio.h>
double squi(double n);
int main()
{
    double num;
    printf("please enter the num\n");
    scanf("%lf",&num);
    num = squi(num);
    printf("the squid of num is%.3lf\n",num);

    return 0;

}
double squi(double n)
{
    return n = n*n*n;
}