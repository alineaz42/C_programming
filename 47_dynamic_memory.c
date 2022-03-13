#include <stdio.h>
#include <stdlib.h>
// malloc calloc realloc free
int main()
{
    // video 20min still in malloc
    // use of malloc // defaul values ar garbage
    /*
    int *ptr, n;
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the size of the array you want to: \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("i=%d; and ptr=%d\n", i, ptr[i]);
    }
    */
    // use of calloc() // we use calloc cause defaults are 0
    int *ptr, n;
    ptr = (int *)calloc(n, sizeof(int));
    printf("Enter the size of the array you want to: \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("i=%d; and ptr=%d\n", i, ptr[i]);
    }
    return 0;
}