#include <stdio.h>

int main(void)
{
    int num=10;
    int * p=&num;//通过取地址符取到了num在内存中的地址
    /*为了能保存num的地址，使用一个变量来进行保存
    那么这个保存地址的变量类型称为指针变量类型 这种类型就是int* 
    */
    printf("num=%d,p=%p\n",num,p);

    return 0;
}
