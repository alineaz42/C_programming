/*
km to miles 0.621371
inches to foot foot/12
cm to inches 2.54cm
*/

// #include <stdio.h>
// int km_to_mile(float a)
// {
//     float b;
//     b = a * 0.621371;
//     return b;
// }
// int inches_to_foot(float a)
// {
//     float a, i;
//     i = a / 12;
//     return i;
// }
// int cm_to_inches(float a)
// {
//     float cm;
//     cm = a * 2.54;
//     return cm;
// }
// int main()
// {
//     float a;
//     int b;
//     printf("Enter what conversion you want: \n");
//     printf("1 for km to miles\n");
//     printf("2 for inches to foot\n");
//     printf("1 for cm to inches\n");
//     scanf("%d", &b);

//     printf("Enter the amount: \n");
//     scanf("%f", &a);

//     printf("Your number is: %0.4f\n", a);
//     if (b == 1)
//     {
//         printf("The amount is: %0.3f\n", km_to_mile(a));
//     }
//     else if (b == 2)
//     {
//         printf("The amount is: %0.3f\n", inches_to_foot(a));
//     }
//     else
//     {
//         printf("The amount is: 0.3f\n", cm_to_inches(a));
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    float a;
    printf("Enter an amount: \n");
    scanf("%f", &a);
    printf("the result km to mile is: %0.3f\n", a * 0.621);
    return 0;
}