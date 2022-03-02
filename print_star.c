#include <stdio.h>

void print_star1(int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void print_star2(int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void print_star3(int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void print_alphabet1(int a, int b)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", j + 65);
        }
        printf("\n");
    }
}
void print_alphabet2(int a, int b)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", i + 64);
        }
        printf("\n");
    }
}
void print_num1(int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}
void print_num2(int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}
void print_num4(int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

void rev_num(int a)
{
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= a - i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}
void rev_num2(int a)
{
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= a - i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
void rev_num3(int a)
{
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= a - i; j++)
        {
            printf("%d", i + 1);
        }
        printf("\n");
    }
}

int main()
{
    int a, b;
    printf("Enter the row and collum:\n");
    scanf("%d %d", &a, &b);
    print_star1(a, b);
    print_star2(a, b);
    print_star3(a, b);
    print_alphabet1(a, b);
    print_alphabet2(a, b);
    print_num1(a, b);
    print_num2(a, b);

    rev_num(a);
    rev_num2(a);
    rev_num3(a);
    return 0;
}
