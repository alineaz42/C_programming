#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    // char *operation = NULL;
    int num1, num2;
    // operation = argv[1];
    printf("%s\n", argv[1]);
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    // printf("Operation %s\n", operation);
    // printf("Num1: %d\n", num1);
    // printf("Num2: %d\n", num2);
    if (strcmp(argv[1], "add") == 0)
    {
        printf("The sum is: %d\n", num1 + num2);
    }
    else if (strcmp(argv[1], "sub") == 0)
    {
        printf("The subtraction is: %d\n", num1 - num2);
    }
    else if (strcmp(argv[1], "mul") == 0)
    {
        printf("The multiplication is: %d\n", num1 * num2);
    }
    else if (strcmp(argv[1], "div") == 0)
    {
        printf("The division is: %f\n", (float)num1 / num2);
    }
    return 0;
}
