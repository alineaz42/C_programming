#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("The number of var: %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("The val at index %d is: %s\n", i, argv[i]);
    }
    return 0;
}
