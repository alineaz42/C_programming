#include <stdio.h>
/*
two types of calling functions
1. call by value: can't change the value of the variable: Regular functions written bellow
2. call by reference : we pass the address of the variable and the value can be changed
*/
// call by reference example
// int swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
//     return 0;
// }
// // call by value example
// int swap2(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     return 0;
// }
// void changeValue(int *a)
// {
//     // int b;
//     *a = *a + 5;
// }
// int main()
// {
//     int a = 44, b = 74;
//     printf("%d  %d \n", a, b);
//     swap(&a, &b);
//     printf("%d  %d \n", a, b);
//     swap2(a, b);
//     printf("%d  %d \n", a, b);
//     changeValue(&a);
//     printf("%d  %d \n", a, b);

//     return 0;
// }
// void swapval(int *a, int *b)
// {
//     int tem;
//     tem = *a;
//     *a = *b;
//     *b = tem;
// }
// int main()
// {
//     int a = 5, b = 14;
//     printf("The val of a: %d and b: %d\n", a, b);
//     swapval(&a, &b);
//     printf("The val of a: %d and b: %d\n", a, b);
//     return 0;
// }
/*
was trying to see if i can call any other nested functions
int sam(int a, int b)
{
    int total;
    total = a + b;
    return total;
}

int average(int a, int b)
{
    int sum, avg;
    sum = sam(a, b);
    avg = sum / 2;
    return avg;
}
int main()
{
    int a = 10, b = 50, avg;
    avg = average(a, b);
    printf("The average of the num %d and %d is: %d\n", a, b, avg);
    a = 50;
    b = 30;
    printf("%d %d\n", a, b);
    return 0;
}
*/