#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    int a[3][4], b[4][2];
    int result[3][2];
    // input of the first matrix
    printf("Enter the first matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The the element %d%d of first matrix\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    // input of the second matrix
    printf("Enter the  element of second matrix\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the element %d%d of second matrix\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    // calculating the result
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][k] * b[k][j];
                result[i][j] = sum;
                sum = 0;
            }
        }
    }
    // printing the result
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}