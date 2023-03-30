


int put1(const char * st)
{
    int count;
    while(*st!='\0')
    {
        putchar(*st++);
        count++;
    }
    return count;
}