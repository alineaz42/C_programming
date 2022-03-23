#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// #include <string.h>
int compChoic()
{
    srand(time(NULL));

    return rand() % 2 + 1;
}

int main()
{
    // printf("This game is already done in the previous codes");
    int a;

    // printf("%d\n", a);
    int yourChoice;
    for (int i = 1; i <= 3; i++)
    {
        a = compChoic();
        printf("Enter your choice:\n");
        scanf("%d", &yourChoice);
        printf("You chosed %d and computer chosed: %d\n", yourChoice, a);
        // the logics here
    }
    return 0;
}