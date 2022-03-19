#include <stdio.h>

int main()
{
    int a = 4514;
    float b = 45.24;
    void *ptr;
    ptr = &a;
    printf("%d\n", *((int *)ptr));
    ptr = &b;
    printf("%.2f\n", *((float *)ptr));
    return 0;
}