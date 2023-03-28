
#include <stdio.h>
void inputArr(int (*arr)[5],int rows);
void displayArr(int (*arr)[5],int rows);
float avg_row(int * arr,int rows);
int totall(int (*arr)[5],int rows);
int max(int(*arr)[5],int rows);
int main(void)
{
    int arr[3][5];
    int row=0,col=0;
    int (*ptr)[5]=arr;
    int subtot=0;
    float avg;
    int total=0;
    printf("Please enter 3x5numbers:\n");

    inputArr(arr,5);
    displayArr(arr,5);

    for(row=0;row<3;row++)
    {
        printf("the %d 's average value is %.1f\n",row,avg_row(arr[row],5));
    }
    printf("Total value =%d\n",totall(arr,5));
    max(arr,5);

    

    return 0;


}


void inputArr(int (*arr)[5],int rows)
{
    int col=0,row=0;
    for(row=0;row<3;row++)  //输入数组
    {
        for(col=0;col<5;col++)
        {
            scanf("%d",&(arr[row][col]));
        }
    }

}

void displayArr(int (*arr)[5],int rows)
{
    int col=0,row=0;
    for(row=0;row<3;row++)  //打印出数组
    {
        for(col=0;col<5;col++)
        {
            printf("%5d",arr[row][col]);
        }
        putchar('\n');
    }
}

float avg_row(int * arr,int rows)
{
    int index;
    float avg;
    for(index=0;index<5;index++)
    {
        avg+=arr[index];
    }
    return (avg/=5.0);
}

int totall(int (*arr)[5],int rows)
{
    int row,col,total,subtot;

     for(row=0,total=0;row<3;row++)
    {
        for(col=0,subtot=0;col<5;col++)
        {
            subtot+=arr[row][col];
        }
        total+=subtot;
    }
    return total;
}

int max(int(*arr)[5],int rows)
{
    int max,row,col;
    for(row=0;row<3;row++)
    {
        for(col=0;col<5;col++)
        {
            if(arr[row][col]>max)
                max=arr[row][col];
        }
    }
    printf("Max value = %d\n",max);
    return max;
}