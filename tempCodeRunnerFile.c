#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// void myptr();
int main()
{

    int a = 54;
    int *ptr = NULL;
    // ptr = &a;
    printf("The address of a is: %p\n", ptr);
    printf("The value of a is: %d\n", *ptr);
    return 0;
    // int a = 50;
    // int *ptr = NULL;
    // ptr = &a;
    // int a = NULL;
    // a = 52;
    // printf("%d\n", a);
    // myptr();
}

void myptr()
{
    int n;
    char *ptr;
    printf("Enter the char in your name: \n");
    scanf("&n");
    ptr = (char *)malloc((n + 1) * sizeof(char));
    printf("Enter ptr\n");
    scanf("%s", ptr);
    printf("%s", ptr);
    free(ptr);
}