#include <stdio.h>
void pattern14()
{
    int i, j;
    int n = 5;
    int x;
    for (i = 1; i <= n; i++)
    {
        x = n - i + 1;
        for (j = 1; j <= n; j++)
        {
            printf("%3d", x);
            x = x + n;
        }
        printf("\n");
    }
}
int main()
{
    int n = 5;
    int i, j;
    int x, y;
    for (i = 1; i <= n; i++)
    {
        x = i;
        y = n - i + 1;
        for (j = 1; j <= n; j++)
        {
            if (j % 2 == 1)
            {
                printf("%3d", x);
            }
            else
            {
                printf("%3d", y);
            }
            x = x + n;
            y = y + n;
        }
        printf("\n");
    }
    printf("\n\n");
    pattern14();
    return 0;
}