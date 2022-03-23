
// uninitialized pointers are called wild pointers
// initializing a pointer to null is a good practice

// for further information:
// https://codewithharry.com/videos/c-language-tutorials-in-hindi-55
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 54;
    int *ptr = NULL;
    ptr = &a;
    printf("%d\n", *ptr);
    int *ptr2; // this is a wild pointer will return a garbage now
    return 0;
}