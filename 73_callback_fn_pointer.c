#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b)
{
    return a + b;
}
void greetHello(int (*ptr)(int, int))
{
    printf("Hello World!\n");
    printf("The sum is: %d\n", ptr(5, 7));
}
void greetWelcome(int (*ptr)(int, int))
{
    printf("Wellcome to the future!\n");
    printf("The sum is: %d\n", ptr(5, 7));
}
int main()
{
    int (*ptr)(int, int);
    ptr = sum;
    greetHello(ptr);
    greetWelcome(ptr);

    return 0;
}