// #include <stdio.h>
// int main()
// {
//     float amount;
//     int run = 1, i;

//     while (run)
//     {
//         printf("Enter the amount: \n");
//         scanf("%f", &amount);
//         if (i == 10)
//         {
//             continue;
//         }
//         else if (/* condition */)
//         {
//             /* code */
//         }
//         printf("The code is continued\n");
//     }
// }

// #haven't completed thisone yet

#include <stdio.h>
int getnum()
{
    float a;
    printf("Enter a number: \n");
    scanf("%f", &a);
    return a;
}
int main()
{
    printf("The val of a is: %f \n", getnum());
    return 0;
}