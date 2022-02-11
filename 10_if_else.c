/*
1. if statement
2. if else ''
3. if - else if ''
4. nested if
*/

#include <stdio.h>
int main()
{
    int age, death = 0;
    printf("Enter your age \n");
    scanf("%d", &age);
    // checking dead or alive
    printf("Enter if dead or alive 0 or 1 \n");
    scanf("%d", &death);
    printf("Your age is: %d \n", age);
    if (age >= 18)
    {
        if (death == 0)
        {
            printf("You can not vote. Because you are dead!!!!!");
        }
        else
        {
            printf("You can vote");
        }
    }
    else if (age >= 10)
    {
        // printf("You are between 10 to 18. You cant vote");
        if (death == 0)
        {
            printf("Sorry for your death");
        }
        else
        {
            printf("You are between 10 to 18");
        }
    }
    else
    {
        if (death == 1)
        {
            printf("You are alive but you are under age");
        }
    }
    return 0;
}