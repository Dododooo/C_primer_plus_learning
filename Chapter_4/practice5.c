#include <stdio.h>
int main(void)
{
    float dlspeed;
    float filesize;
    float dltime = filesize * 8 / dlspeed;

    printf("Please enter speed and file size:\n");
    scanf("%f %f",&dlspeed,&filesize);

    dltime = filesize * 8 / dlspeed;
    printf("At %.2f megabits per second,a file of %.2f megabytes\n",dlspeed,filesize);
    printf("downloads in %.2f seconds",dltime);

    return 0;
}