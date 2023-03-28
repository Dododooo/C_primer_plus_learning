#include <stdio.h>
void mikad0(int);

int main(void)
{
    int pooh=2,bah=5;

    printf("in main()pool=%d and&pool=%p\n",pooh,&pooh);
    printf("in main(),bah=%d,&bah=%p\n",bah,&bah);
    mikad0(pooh);

    return 0;
}
//参数传递的只是值
void mikad0(int bah)//局部变量，意味着只在函数中有效
{
    int pooh=10;    //局部变量
    printf("in mikado()pool=%d and&pool=%p\n",pooh,&pooh);
    printf("in mikado(),bah=%d,&bah=%p\n",bah,&bah);
}
