#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sum(int a, int b)
{
    return a + b;
}
void greet()
{
    printf("hello world!\n");
}
int main()
{
    printf("The sum : %d\n", sum(1, 2));
    int (*fPtr)(int, int);
    fPtr = &sum;
    int d = (*fPtr)(4, 3);
    printf("%d\n", d);
    return 0;
}