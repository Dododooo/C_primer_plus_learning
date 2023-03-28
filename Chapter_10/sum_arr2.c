#include<stdio.h>
#define SIZE 10
int sump(int * start,int * end);
int main(void)
{
    int marbles[(SIZE)]={26,12,4,53,12,51,74,12,4,12};
    long answer;

    answer=sump(marbles,marbles+SIZE);
    printf("The total number of marble is %ld .\n",answer);

    return 0;


}
int sump(int * start,int * end)
{
    int index;
    int total=0;
    while(start<end)
    {
        total+=*(start++);
        printf("'%d\n",total);
    }

    return total;
}