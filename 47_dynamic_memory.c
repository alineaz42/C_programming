#include <stdio.h>
#include <stdlib.h>
// malloc calloc realloc free
int main()
{
    // video 20min still in malloc
    // use of malloc
    int *ptr;
    ptr = (int *)malloc(3 * sizeof(int));
    printf("Enter ptrs: \n");

    for (int i = 0; i < 3; i++)
    {
        // printf("%d\n", ptr + i);
        scanf("%d", ptr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("The valaue at: %d is = %d\n", i, ptr[i]);
        // scanf("%d", ptr[i]);
    }
    return 0;
}