// by declaring array as function
// by declaring a pointer in  the function to hold the base address of the array
// #include <stdio.h>
/* main code
#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    // array[0] = 382; // Very important point that if you change any value here, it gets reflected in main()
    return 0;
}


void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 6534;
}


void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}


int main()
{
    int arr[][2] = {{2, 13}, {9, 3}};
    // printf("The value at index 0 is %d\n", arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n", arr[0]);
    // func2(arr);
    // func2(arr);
    func3(arr);
    return 0;
}
*/
#include <stdio.h>
int func1(int arr[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("At i %d val %d\n", i, arr[i]);
    }
    // if you change any value of array here will be change in the main function
    return 0;
}
int func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n", i, ptr[i]);
        printf("the value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 14; // the reflect will be in the main function
    return 0;
}
void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("At i=%d j=%d val is: %d\n", i, j, arr[i][j]);
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 2}, arr2[2][3] = {{1, 2}, {4, 2}};
    // func1(arr); // array as a parameter
    // func2(arr);
    // printf("%d\n", arr[2]);
    func3(arr2);
    return 0;
}

// int func(int arr[4])
// {
//     float sum = 0, s = 4;
//     for (int i = 0; i < 4; i++)
//     {
//         sum = sum + arr[i];
//     }
//     float average;
//     average = sum / s;
//     return average;
// }

// int main()
// {
//     int arr[4] = {1, 2, 3, 4};
//     float av = func(arr);
//     printf("The average is: %.f\n", av);
//     return 0;
// }