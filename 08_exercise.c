#include <stdio.h>
// ex. print a multiplication table entered by the user....
int main()
{
    int num, i;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    printf("\n Table of %d", num);
    for (i = 1; i <= 10; i++)
    {
        printf("\n %d %d = %d", num, i, (num * i));
    };

    return 0;
}

// Its a mess