#include<stdio.h>
#include<math.h>
int main(void)

{
    const double ANSWER = 3.14159;
    double response;

    printf("waht is the value of pi?\n");
    scanf("%lf",&response);
    while(fabs(response - ANSWER)> 0.0001)
    {
        printf("try agian!\n");
        scanf("%lf",&response);
    }
    printf("Close enough!\n");

    return 0;
}