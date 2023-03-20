#include <stdio.h>//更多printf的特性
int main(void)
{
    unsigned int un = 3000000000;//超出了%d的存储范围
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;
    printf("un = %u and not %d , the size is %dbyte = %d bit\n",un,un,sizeof(un),sizeof(un)*8);
    printf("end = %hd and not %d\n",end,end);
    printf("big = %ld not %hd\n",big,big);
    printf("verybig = %lld not %ld\n",verybig,verybig);
    return 0;
}   