#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate_ran(int a)
{
    srand(time(NULL));
    return rand() % a;
}

int main()
{
    printf("1. Rock\n2. Paper\n3. Scisors\n");
    int your_choice, a;
    int run = 0;
    // bool run;

    // printf("The random number is: %d\n", generate_ran(5));
    while (run < 3)
    {
        a = generate_ran(3);
        printf("Enter your choice\n");
        scanf("%d", &your_choice);
        if (your_choice == 0 && a == 1)
        {
            printf("Computer wins");
        }
        else if (your_choice == 0 && a == 2)
        {
            printf("you win\n");
        }
        else if (your_choice == 1 && a == 3)
        {
            printf("computer wins\n");
        }
        else if (your_choice == 2 && a == 0)
        {
            printf("You win\n");
        }
        else
        {
            printf("Comp chose: %d\n", a);
            printf("You chosed %d\n", your_choice);
            run++;
        }
    }

    return 0;
}
/*
while (run > 0)
    {
        printf("Enter  a number: \n");
        scanf("%d", &your_choice);
        printf("\n\nEnter 5 to quit\n\n");
        if (your_choice > a)
        {
            printf("Enter a lower number\n");
        }
        else if (your_choice < a)
        {
            printf("Enter a higher number\n");
        }
        else if (your_choice == a)
        {
            printf("ur num %d=comp num %d\n", your_choice, a);
        }
        else if (your_choice == 5)
        {
            run = 0;
        }
        else
        {
            printf("enter right key\n");
        }
    }
*/
// int generate_random_number(int n)
// {
//     srand(time(NULL));
//     // printf("%d\n", n);
//     return rand() % n;
// }
// int main()
// {
//     // srand(time(NULL)); // srand(45) 45 is the seed here
//     int a;
//     a = generate_random_number(3);
//     printf("The random number between 0 and 100: %d\n", a);
//     // printf("")
//     return 0;
//     generate_random_number(2);
// }