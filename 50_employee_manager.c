// Employee Manager In C - Exercise 8 Solution: C Tutorial In Hindi #50
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chars, i = 0;
    char *ptr;
    while (i < 3)
    {
        printf("Enter Employee%d: num of character\n", i + 1);
        scanf("%d", chars);
        ptr = (char *)malloc((chars + 1) * sizeof(char));
        printf("Enter the id of the Employee1\n");
        scanf("%d", ptr);
        printf("The id of employee1: %d\n", ptr);
        free(ptr);
        i++;
    }
    return 0;
}