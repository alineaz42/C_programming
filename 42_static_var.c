#include <stdio.h>
/*
int glbl = 54;

int func1()
{
    printf("The value of global var is: %d\n", glbl);
    return 34;
}
int func2(int b)
{
    printf("The location of b is: %d\n", &b);
    printf("The value of global var is: %d\n", glbl);
    b = 11;
    return b;
}
*/
// static must take a constant not a function
int myf(int a)
{
    // uninitialized statis var startr from zero
    static int num = 5;
    num++;
    return num;
}
int main()
{
    printf("Value of num is: %d\n", myf(5));
    // printf("The memory of the func is: %d\n", &myf(4));
    printf("Value of num is: %d\n", myf(5));
    // printf("The memory of the func is: %d\n", &myf(4));
    printf("Value of num is: %d\n", myf(5));
    // printf("The memory of the func is: %d\n", &myf(4));
    // int b = 43;
    // int val = func2(b);
    // int *ptr = &b;
    // printf("The value of function1 is: %d\n\n", func1());
    // printf("The value of function2 is: %d\n\n", val);
    // printf("The value of b is; %d\n", b);
    // printf("The location of b in main is: %d\n", &b);
    return 0;
}
