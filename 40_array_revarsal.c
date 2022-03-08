#include <stdio.h>

void ar_rev(int arr[])
{

    int temp;
    for (int i = 0; i < 8; i++)
    {
        temp = arr[i];
        arr[i] = arr[7 - i];
        arr[7 - i] = temp;
        if (i == 3)
        {
            break;
        }
    }
    // for (int i = 0; i < 8; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }
}
void ar_rev2(int arr[])
{
    int temp;
    for (int i = 0; i < 5 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }
}
int main()
{
    // printf('Hello World\n');
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[] = {3, 4, 5, 6, 7};
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", arr[i]);
    }

    ar_rev(arr);
    ar_rev2(arr2);
    // printf("%d\n", sizeof(arr));
    printf("After reversing\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", arr[i]);
    }
    // printf("%d", *arr2);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr2[i]);
    }
    return 0;
}
