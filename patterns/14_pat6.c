#include <stdio.h>

int main()
{
    int i, j, n = 5, k = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%3d", k);
            k += 2;
        }
        printf("\n");
    }
    return 0;
}