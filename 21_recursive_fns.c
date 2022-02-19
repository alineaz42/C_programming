#include <stdio.h>

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}

int main()
{
    int a, n;
    printf("Enter your number : \n");
    scanf("%d", &n);
    a = factorial(n);
    printf("The factorial of %d is: %d\n", n, a);
    // the above codes can also be written as
    printf("The factorial of %d is %d\n", n, factorial(n));
    return 0;
}
// recursive functions  is a process when a fn  call a copy of itself
