#include<stdio.h>
int main(void){
    int ten = 10 ;
    int two = 2;
    printf("Doing it right:");
    printf("%d minus %d is %d====%d\n",ten,2,ten -two);
    printf("Doing it wrong:");
    printf("%d minus %d is %d\n",ten);//后面的两个值是随机生成的
    return 0;
}