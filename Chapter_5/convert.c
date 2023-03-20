#include <stdio.h>
int main(void)
{

    char ch;
    int i;
    float fl;

    fl = i = ch = 'C';
    printf("ch = %c ,i= %d , fl= %2.2f\n",ch,i,fl);
    ch = ch +1 ;
    i=fl +2 *ch;
    fl = 2.0 *ch +1;
    printf("ch = %c ,i= %d , fl= %2.2f\n",ch,i,fl);
    i = 1/0;
    printf("%d\n",i);


    return 0;
}