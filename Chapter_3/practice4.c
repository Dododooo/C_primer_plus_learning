#include <stdio.h>

int main(void)
{
    float f_num;
    printf("please enter the float:");
    scanf("%f",&f_num);
    printf("xiaoshudian = %f\n",f_num);
    printf("zhishu = %e\n",f_num);
    printf("pjishu = %a\n",f_num);
    printf("done\n");
    return 0;
}
