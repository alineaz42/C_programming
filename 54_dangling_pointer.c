#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
int *functionDangling() // * because I am returning an address of memory
{
    int a = 54;
    return &a;
}
*/
int main()
{
    /*
    // case1: deallocation of memory
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 54;
    ptr[1] = 51;
    ptr[2] = 52;
    ptr[3] = 53;
    free(ptr); // is now for dangling pointer
    printf("%d\n", *ptr);
    */
    /*
    // case2: function return case
    int *ptr2 = functionDangling(); // now ptr2 is dangling
    printf("%d\n", *ptr2);
    */
    // case 3:
    int *ptr = NULL;

    {
        int i = 54;
        ptr = &i;
    }
    printf("%d\n", *ptr); // it was supposed not to work properly but it is working case3...

    return 0;
}