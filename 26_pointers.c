
#include <stdio.h>
int main()
{
    int a = 5;
    int *ptr = &a;
    printf("%d\n", a);
    printf("The value of a is: %d\n", *ptr);
    printf("The address of  a is: %x\n", ptr);
    printf("The address of ptr is %p\n", &ptr);
    return 0;
}