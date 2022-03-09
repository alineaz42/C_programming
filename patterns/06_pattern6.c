#include <stdio.h>

void pattern2()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}

void pattern3()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

void pattern4()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c", i + 64);
        }
        printf("\n");
    }
}

void pattern5()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c", j + 64);
        }
        printf("\n");
    }
}

void pattern6()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

void pattern7()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%b", i);
        }
        printf("\n");
    }
}

int main()
{
    // printf('Hello World');
    int i, j, n = 5;
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
    pattern2();
    pattern3();
    pattern4();
    pattern5();
    pattern6();
    pattern7();
    return 0;
}