#include <stdio.h>

int recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return recursive(n - 1) + recursive(n - 2);
    }
    // return 0;
}
int itrative(int n)
{
    int a = 0, b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }

    return a;
}
int main()
{
    printf("Hello World!!\n");
    printf("Enter a number: \n");
    int num;
    scanf("%d", &num);
    printf("The recursive ans is: %d\n", recursive(num));
    printf("The itrative ans is: %d\n", itrative(num));
    return 0;
}