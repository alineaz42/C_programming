#include <stdio.h>
//  1 0 1 0 1
//  0 0 0 0 0
//  1 0 1 0 1
//  0 0 0 0 0
//  1 0 1 0 1
int main()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {

            printf("%2d", (i * j) % 2);
        }
        printf("\n");
    }
    return 0;
}
