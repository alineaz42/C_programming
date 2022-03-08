#include <stdio.h>
// 01
//  int main()
//  {
//      printf("Hello world!");
//      return 0;
//  }

// 02 basic structure
// int main()
// {
//     int a, b;
//     printf("Enter number a: \n");
//     scanf("%d", &a);
//     printf("Enter number b: \n");
//     scanf("%d", &b);
//     printf("The num a is: %d and b is: %d\n", a, b);
//     return 0;
// }

// 06 data types
// int main()
// {
//     int a, arr[1];
//     printf("The size if: %lu\n", sizeof(int));
//     printf("The size if: %lu\n", sizeof(arr));
//     printf("The size if: %lu\n", sizeof(char));
//     printf("The size if: %lu\n", sizeof(double));
//     printf("Size of char %lu\n", sizeof(char));
//     printf("Size of long %lu\n", sizeof(long));
//     return 0;
// }

// 07 operators
// int main()
// {
//     int a = 5, b = 6;
//     printf("Bitwise and a & b %d\n", a & b);
//     return 0;
// }

// 08 exercise
// int main()
// {

//     int a, i;
//     printf("Enter the num: \n");
//     scanf("%d", &a);
//     printf("The multiplication table of %d is: \n ", a);
//     for (i = 1; i <= 10; i++)
//     {
//         printf("%d X %d = %d\n", a, i, a * i);
//     }
//     printf("The execution is terminated\n");
//     return 0;
// }

// 09 escape sequence and specifier sequence
// int main()
// {
//     printf("Hello world\a");
//     printf("Hello world\b");
//     printf("Hello world\f");
//     printf("Hello world\n");
//     printf("Hello world\r");
//     printf("Hello world\t");
//     printf("Hello world\v");
//     printf("Hello world\'");
//     printf("Hello world\" ");
//     printf("Hello world\?");
//     printf("Hello world\\");
//     return 0;
// }

// #define PI 3.1416
// int main()
// {
//     printf("%f\n", PI);
//     printf("%2.f\n", PI);
//     printf("%.5f\n", PI);
//     return 0;
// }

// 10 conditional statement

// int main()
// {
//     int age = -5;
//     if (age < 18)
//     {
//         printf("You are less than 18\n");
//         if (age < 10)
//         {
//             printf("You are less than even 10\n");
//         }
//     }
//     else if (age >= 18)
//     {
//         printf("You can vote\n");
//         if (age > 30)
//         {
//             printf("You can be a PM\n");
//         }
//     }
//     else
//     {
//         printf("I am not sure you are human or not\n");
//         if (age < 0)
//         {
//             printf("You are less than 10");
//         }
//     }
//     return 0;
// }

// 11 switch case control

// you can use int or char
// int main()
// {
//     int age = 24, mark = 55;
//     switch (mark)
//     {
//     case 50:
//         printf("You are 50\n");
//         break;
//     case 55:
//         printf("You are 55\n");
//         break;
//     default:
//         printf("I am not sure what you are\n");
//         break;
//     }
// }

// 12 while for and do while looping through you my dear code

// int main()
// {
//     int a = 10, i = 0;

//     // while loop
//     //  while (i <= a)
//     //  {
//     //      printf("I is: %d\n", i);
//     //      i++;
//     //  }

//     //  for loop
//     // for (i; i < a; i++)
//     // {
//     //     printf("i is %d\n", i);
//     // }
//     // do while
//     printf("Do while loop\n");
//     do
//     {
//         printf("i is: %d\n", i);
//         i++;
//     } while (i < a);

//     return 0;
// }

// 16 break and continue statment
// int main()
// {
//     int a;
//     printf("a?\n");
//     scanf("%d", &a);
//     for (int i = 0; i < a; i++)
//     {
//         printf("i=%d\n", i);
//         if (i == 5)
//         {
//             printf("This is the code after the break\n");
//             // break;
//             continue;
//         }
//     }
//     printf("This is the code after the break\n");
//     return 0;
// }

// int main()
// {
//     int n = 5;
//     int sam;
//     for (int i = 1; i <= n;i++){
//         if(n==0||n==1){
//             printf("%d\n", n);
//         }else{
//             printf("%d\n",)
//         }
//     }
//         return 0;
// }
