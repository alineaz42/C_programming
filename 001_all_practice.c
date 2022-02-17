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