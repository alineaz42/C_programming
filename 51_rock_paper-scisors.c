#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
1. Rock
2. Paper
3. Scisors
Rock crushes Scisors,Paper covers Rock,Scisors cuts paper
*/
int compNumber()
{
    srand(time(NULL));
    int a;
    a = rand() % 3;
    return a + 1;
}

int main()
{
    int com_num, your_choice, your_score = 0, comp_score = 0;
    for (int i = 0; i < 3; i++)
    {
        com_num = compNumber();
        printf("Pleas enter a number between 1 to 3\n");
        printf("Enter your choice:  \n");
        printf("\n1. Rock\n2. Paper\n3. Scisors\n");
        scanf("%d", &your_choice);
        if (your_choice == com_num)
        {
            printf("Its a tie\n");
            printf("Your choic: %d. Computer choice: %d\n", your_choice, com_num);
        }
        else if (your_choice == 1 && com_num == 2)
        {
            printf("You lose this round\n");
            printf("Your choic: %d. Computer choice: %d\n", your_choice, com_num);
            comp_score = comp_score + 1;
        }
        else if (your_choice == 2 && com_num == 3)
        {
            printf("Your choic: %d. Computer choice: %d\n", your_choice, com_num);
            printf("You lose this round\n");
            comp_score = comp_score + 1;
        }
        else if (your_choice == 3 && com_num == 1)
        {
            printf("Your choic: %d. Computer choice: %d\n", your_choice, com_num);
            printf("You lose this round\n");
            comp_score = comp_score + 1;
        }
        else
        {
            printf("Your choic: %d. Computer choice: %d\n", your_choice, com_num);
            printf("You won this round\n");
            your_score = your_score + 1;
        }
    }
    printf("Computer Score: %d\n", comp_score);
    printf("Your Score: %d\n", your_score);
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int generate_ran(int a)
// {
//     srand(time(NULL));
//     return rand() % a;
// }

// int main()
// {
//     printf("1. Rock\n2. Paper\n3. Scisors\n");
//     int your_choice, a;
//     int run = 0;
//     // bool run;

//     // printf("The random number is: %d\n", generate_ran(5));
//     while (run < 3)
//     {
//         a = generate_ran(3);
//         printf("Enter your choice\n");
//         scanf("%d", &your_choice);
//         if (your_choice == 0 && a == 1)
//         {
//             printf("Computer wins");
//         }
//         else if (your_choice == 0 && a == 2)
//         {
//             printf("you win\n");
//         }
//         else if (your_choice == 1 && a == 3)
//         {
//             printf("computer wins\n");
//         }
//         else if (your_choice == 2 && a == 0)
//         {
//             printf("You win\n");
//         }
//         else
//         {
//             printf("Comp chose: %d\n", a);
//             printf("You chosed %d\n", your_choice);
//             run++;
//         }
//     }

//     return 0;
// }
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