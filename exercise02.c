#include <stdio.h>

int main()
{
    int a;
    printf("Enter 1 If you passed on Science\nEnter 2 if you passed Math \nEnter 3 If you passed both\n");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("We are giving you this gift for passing only in Science\n");
    }
    else if (a == 2)
    {
        printf("We are giving you this gift forpassing only in Math\n");
    }
    else if (a == 3)
    {
        printf("Congratulation for passing on both subject Math and Science\n");
    }
    else
    {
        printf("Sorry You entry is wrong!!!!!!");
    }

    return 0;
}