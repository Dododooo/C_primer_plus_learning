#include <stdio.h>
#define SIZE 10
int sum(int * ar,int n);
int main(void)
{
    int marbles[SIZE]={26,12,4,53,12,51,74,12,4,12};
    long answer;

    answer =sum(marbles,SIZE);
    printf("The total number of marble is %ld\n",answer);
    printf("The size of marble is %zd bytes.\n",sizeof(marbles));

    return 0;
}

int sum(int * ar,int n)
{
    int index;
    int total;
    for(index=0,total=0;index<SIZE;index++)
    {
        total+= ar[index];
    }
    printf("the size of ar is %zd bytes.\n",sizeof(ar));//这里输出为8byte，因为ar本身不是数组而是指针

    return total;
}