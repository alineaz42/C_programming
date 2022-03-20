#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// void myptr();
int main()
{

    int a = 50;
    int *ptr = NULL;
    ptr = &a;
    // int a = NULL;
    // a = 52;
    // printf("%d\n", a);
    // myptr();
    return 0;
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