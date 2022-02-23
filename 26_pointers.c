// pointer stores the address of another variable
#include <stdio.h>
int main()
{
    int a = 5;
    int *ptr = &a, *ptrn = NULL;
    printf("%d\n", a);
    printf("The value of a is: %d\n", *ptr);
    printf("The address of  a is: %x\n", ptr);
    printf("The address of ptr is %p\n", &ptr);
    printf("the value of a is: %x\n", *ptr);
    printf("The value of ptrn is %d\n", ptrn);
    printf("The value of ptrn is %x\n", ptrn);
    return 0;
}
// pointers not assigned any value but Null is a Null pointers
