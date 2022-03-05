#include <stdio.h>
/* this pattern
 _ _ _ *
 _ _ * * *
 _ * * * * *
 * * * * * * *
 */
void print_pyramid(int n);
void print_pyramid2(int n);
void print_pyramid3(int n);

int main()
{
    int n;
    printf("Enter n: \n");
    scanf("%d", &n);

    // print_pyramid(n);
    print_pyramid2(n);
    print_pyramid3(n);
    return 0;
}
// programm 1
void print_pyramid(int n)
{
    int row, col;
    for (row = 1; row <= n; row++)
    {
        // first print space
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        // print the star = row num not the n num
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
}
// programm 2
void print_pyramid2(int n)
{
    int row, col;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf("%d", row);
        }
        printf("\n");
    }
}
// programm3
void print_pyramid3(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }
}