#include <stdio.h>

int main(void)
{
    int kuatuo_num;
    long fenzi_num;
    printf("Please enter the num of kuatuo of water:");
    scanf("%d",&kuatuo_num);
    fenzi_num = kuatuo_num *950 / 3.156e-23;
    printf("%d kuatuo of water got %ld water fenzi\n",kuatuo_num,fenzi_num);
    printf("done");
    return 0;
}
