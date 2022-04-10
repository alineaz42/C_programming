#include <stdio.h>

int main()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i % 2 == 1)
            {
                printf("%d", 0);
            }
            else
            {
                printf("%d", 1);
            }
        }
        printf("\n");
    }
    return 0;
}