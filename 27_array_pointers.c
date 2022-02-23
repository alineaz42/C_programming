// array and pointer arithmatic
/*
++,--,+,-
*/
#include <stdio.h>
// int main()
// {
//     int a = 45;
//     int *ptra = &a;
//     printf("%d\n", ptra);
//     ptra++;
//     printf("%d\n", ptra);
//     ptra--;
//     printf("%d\n", ptra);
//     // printf("%d\n", ptra + 1);
//     // printf("%d\n", ptra + 2);
//     // printf("%d\n", ptra - 2);
//     // printf("%d\n", ptra++);
//     return 0;
// }
// if there is no value in the address you can't print it or dereference it

// ------------Arrays and Pointers--------------------------
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    printf("The value of arr[0] is %d\n", arr[0]);
    int *arrayptr = arr;
    // you can write arrayptr++; but cant arr+(its invalid);

    printf("The address of the first element is:  %d\n", &arr[0]);
    printf("The address of the first element is:  %d\n", arr);
    printf("The address of the second element is:  %d\n", &arr[1]);
    printf("The address of the second element is:  %d\n", &arr[0] + 1);

    printf("The value at address is:  %d\n", *arr);
    printf("The value at address is:  %d\n", *arr);
    printf("The  value at address is:  %d\n", *arr + 1);
    printf("The  value at address is:  %d\n", *arr + 2);

    return 0;
}