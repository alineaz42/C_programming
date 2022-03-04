#include <stdio.h>
// not going according to the plan but working in some cases
void arr_rev(int *arr[])
{
    int i;
    for (i = 6; i >= 0; i--)
    {
        // puts(arg[i]);
        printf("%d", *(arr + i));
    }
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    // puts(arr);
    printf("%d\n", *arr);
    arr_rev(arr);
    // puts(arr);
    // printf("%d\n", arr);
    // printf(arr);
    return 0;
}