// break and continue statement
// break is used to get out of the loop or switch statement
#include <stdio.h>
int main()
{
    int i, age;
    for (i = 0; i <= 10; i++)
    {
        printf("Hello World %d\n", i);
        printf("Enter your age: \n");
        scanf("%d", &age);
        // if (age > 10)
        // {
        //     break;
        // }
        if (age < 10)
        {
            continue;
        }
        printf("The loop is not continued..\n");
    }
    printf("Thank you!!!!!");
    return 0;
}
// if you have one line in the for loop no need to use the brace
// #include <stdio.h>
// int main()
// {
//     int i;
//     for (i = 1; i <= 10; i++)
//         printf("Hello World\n");
//     return 0;
// }