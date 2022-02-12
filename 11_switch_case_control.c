#include <stdio.h>

int main()
{
    int age, mark;
    printf("Enter your age: \n");
    scanf("%d", &age);
    printf("Enter your marks: \n");
    scanf("%d", &mark);
    switch (age)
    {
    case 10:
        printf("Age is 10 \n");
        // nested switch statement
        switch (mark)
        {
        case 45:
            printf("Your marks are 45\n");
            break;

        default:
            printf("Your marks age not 45\n");
            break;
        }
        break;
        // Its not necessary to use break every time
    case 20:
        printf("Age is 20 \n");
        break;
    case 50:
        printf("Age is 50\n");
        break;

    default:
        printf("Invalid Age...");
        break;
    }
    return 0;
}