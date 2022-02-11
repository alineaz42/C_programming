/*
1. if statement
2. if else ''
3. if - else if ''
4. nested if
*/

#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age \n");
    scanf("%d", &age);
    printf("Your age is: %d \n", age);
    if (age >= 18)
    {
        printf("You can vote!!!!!");
    }
    return 0;
}