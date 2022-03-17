#include <stdio.h>
void pattern1(int i, int j, int n)
{
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattbox(int i, int j, int n)
{
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void pattern3(int i, int j, int n)
{
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int i, j, n = 5;
    pattern1(i, j, n);
    pattbox(i, j, n);
    pattern3(i, j, n);
    return 0;
}