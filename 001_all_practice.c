// #include <stdio.h>

// 01
// #include <stdio.h>
// int main()
// {
//     printf("Hello World");
//     return 0;
// }
// 02 basic structures
// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("Enter number a: ");
//     scanf("%d", &a);
//     printf("Enter number b: ");
//     scanf("%d", &b);
//     printf("The sum of  a %d and b %b is: %d", a, b, a + b);
//     return 0;
// }

// 06 var dtype
// #include <stdio.h>
// int main()
// {
//     printf("%lu", sizeof(int));
//     return 0;
// }
// 07 operators
// #include <stdio.h>
// int main()
// {
//     int a = 34, b = 6;
//     float c = 3.4;
//     int d = 5;
//     int e = 0;
//     printf("a+b=%d\n", a + b);
//     printf("a-b=%d\n", a - b);
//     printf("a*b=%d\n", a * b);
//     printf("a/b=%d\n", a / b);
//     // remainders
//     printf("a%b is %d\n", a % b);
//     printf("%f\n", a - c);
//     printf("a&&b= %d", a && b);
//     printf("a||b= %d", a || b);
//     printf("!b= %d", !b);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int a = 2, b = 3;
//     printf(" a & b= %d\n", a & b);
//     printf(" a || b= %d\n", a | b);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num = 6, i;
//     printf("\n Table of %d", num);
//     for (i = 1; i <= 10; i++)
//     {
//         printf("\n %d X %d = %d\n", num, i, num * i);
//     }
//     return 0;
// }

// #include <stdio.h>
// #define PI 3.1416
// int main()
// {
//     printf("\n%0.4f\n\n", PI);
//     printf("\n%0.2f\n\n", PI);
//     return 0;
// }
// 10 if else condition
// #include <stdio.h>
// int main()
// {
//     int age;
//     printf("Enter your age \n");
//     scanf("%d", &age);
//     if (age >= 18)
//     {
//         printf("You can vote\n");
//     }
//     // else
//     // {
//     //     printf("You can not vote.\n");
//     // }
//     else if (age >= 100 || age <= 0)
//     {
//         printf("You age not okay");
//     }
//     else
//     {
//         printf("Something is missing.");
//     }
//     return 0;
// }

// int main()
// {
//     int age, mark;
//     printf("Enter your age: \n");
//     scanf("%d", &age);
//     printf("Enter your marks: \n");
//     scanf("%d", &mark);
//     switch (age)
//     {
//     case 10:
//         printf("Age is 10 \n");
//         break;
//     case 25:
//         printf('Age is 25.\n');
//         break;
//     default:
//         printf("It is default");
//         break;
//     }
// }
// do{

// }while()
// whil(condition)
// {
//     loop;
//     increment;
// }
// for (start; condition;increment)
// {
//     code to run
// }

// 16 break and continue statement
// #include <stdio.h>
// int main()
// {
//     int age, i;
//     printf('Enter your age: \n');
//     scanf("%d", &age);
//     for (i = 0; i <= 10; i++)
//     {
//         printf("With break");
//         if (age < 12)
//         {
//             break;
//         }
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int i = 0, num;
//     printf("Enter the num: ");
//     scanf("%d", &num);
//     while (i <= num)
//     {
//         printf("%d\n", i);
//         i = i + 1;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, age;
//     for (i = 0; i <= 10; i++)
//     {
//         printf("Hello World %d\n", i);
//         printf("Enter your age: ");
//         scanf("%d", &age);
//         // if (age < 10)
//         // {
//         //     break;
//         // }
//         if (age < 10)
//         {
//             continue;
//         }
//         printf("Enter what ever you want...");
//         printf("Enter what ever you want...");
//         printf("Enter what ever you want...");
//         printf("Enter what ever you want...");
//         printf("Enter what ever you want...");
//         printf("Enter what ever you want...");
//     }
//     return 0;
// }

// The  following code is not running properly
// #include <stdio.h>

// int main()
// {
//     int a[2][2][2] = {{{1, 2}, {3, 2}}, {{2, 3}, {5, 4}}};
//     // printf("%d\n", a);
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             for (int k = 0; i < 2; k++)
//             {
//                 printf("Tha a%d\n", a[i][j][k]);
//             }
//         }
//     }
//     return 0;
// }

// int main()
// {
//     // printf("%lu", sizeof(char));
//     printf("%d\n", 2 & 3);
//     printf("%d\n", 5 | 2);
//     printf("%d\n", 5 & 2);
//     return 0;
// }

// int main()
// {
//     int a = 7;
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d X %d = %d\n", a, i, a * i);
//     }
//     return 0;
// // }
// int main()
// {
//     int age;
//     printf("Enter your age: \n");
//     scanf("%d", &age);
//     if (age >= 18)
//     {
//         printf("You can vote as you are: %d\n", age);
//     }
//     else
//     {
//         printf("You can\'t vote as you are : %d\n", age);
//     }
//     return 0;
// }
// int main()
// {
//     printf("Hello World\n");
//     int age;
//     printf("Enter your age: \n");
//     scanf("%d", &age);
//     switch (age)
//     {
//     case 18:
//         printf("You cant vote\n");
//         break;
//     case 20:
//         printf("You can vote\n");
//         break;
//     default:
//         printf("You can never vote\n");
//         break;
//     }
//     return 0;
// }
// int main()
// {
//     int i = 0, num;
//     printf("Enter the num: \n");
//     scanf("%d", &num);
//     // while (i <= num)
//     // {
//     //     printf("%d\n", i);
//     //     i++;
//     // }
//     // do
//     // {
//     //     printf("%d\n", i);
//     //     i++;
//     // } while (i <= num);

//     for (i = 0; i <= num; i++)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }
// int main()
// {
//     int age;
//     printf("Enter your age: \n");
//     scanf("%d", &age);
//     for (int i = 0; i < age; i++)
//     {
//         printf("AGE\n");
//         if (age > 10)
//         {
//             // break;
//             continue;
//         }
//         printf("Ami amr moto hoite pari na\n");
//         printf("Ami amr moto hoite pari na\n");
//         printf("Ami amr moto hoite pari na\n");
//         printf("Ami amr moto hoite pari na\n");
//         printf("Ami amr moto hoite pari na\n");
//         printf("Ami amr moto hoite pari na\n");
//         printf("Ami amr moto hoite pari na\n");
//     }
//     return 0;
// }

// int main()
// {
//     printf("Hello World\n");
//     int a = 12;
//     float b = 4.15;
//     float c = a / b;

//     printf("%f\n", c);
//     return 0;
// }

// functions in C
// int sum(int a, int b)
// {
//     return a + b;
// }
// void printStar(int n)
// {
//     int i = 1;
//     while (i < n)
//     {
//         printf("%c\n", '*');
//         i++;
//     }
// }
// int take_num()
// {
//     int i;
//     printf("Enter a number: \n");
//     scanf("%d", &i);
//     return i;
// }
// void print_my_name()
// {
//     printf("Your name is: Ali Neaz\n");
// }
// int main()
// {
//     int a, b, c, d;
//     a = 645;
//     b = 33;
//     c = sum(a, b);
//     // printf("C=%d\n", c);
//     // printStar(5);
//     // printf("The num is: %d\n", take_num());
//     print_my_name();
//     return 0;
// }
// int fact(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * fact(n - 1);
//     }
// }
// int main()
// {
//     int n;
//     printf("Enter the num: \n");
//     scanf("%d", &n);
//     // printf("Hello World\n");
//     printf("The factorial is: %d\n", fact(n));
//     return 0;
// }

// int main()
// {
//     int a[10];
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Enter num %d\n", i);
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\n", a[i]);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i = 1;
//     while (i)
//     {
//         printf("Hello World\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     printf("%d\n", 2 == 2 && 3 > 5);
//     return 0;
// }
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    printf("Enter what you want:\n");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%dX%d=%d\n", i, n, n * i);
    }
    return 0;
}
*/