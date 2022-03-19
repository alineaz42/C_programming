#include <stdio.h>

int main()
{
    int i, j, n = 5;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", n - i);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", n - j);
        }
        printf("\n");
    }
    return 0;
}