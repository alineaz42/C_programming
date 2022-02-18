#include <stdio.h>

int main()
{
    int a, i, j = 1;
    printf("Enter a num: \n");
    scanf("%d", &a);
    // using for loop
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", a, i, a * i);
    }
    // using while loop. while using while i must be declared
    // while (j <= 10)
    // {
    //     printf("%d X %d = %d\n", a, i, a * i);
    //     i++;
    // }
    // printf("The table is done..");
    // for (int k = 1; i <= 10; i++)
    // {
    //     printf("%d X %d = %d", a, k, a * k);
    // }
    // return 0;
}