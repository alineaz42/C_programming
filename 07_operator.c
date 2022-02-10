/*
1. arithmatic operators
2. realational operator
3. logical operators
4. bitwise opertors
5. assignment operators
*/
// 1 . +,-,*,/,%=modulas

// #include <stdio.h>
// int main()
// {
//     int a = 34, b = 6;
//     float c = 3.4;
//     int d = 5;
//     int e = 0;
//     // all the arithmatic operations
//     printf("a+b= %d \n", a + b);
//     printf("a-b= %d \n", a - b);
//     printf("a*b=%d \n", a * b);
//     printf("a/b=%d \n", a / b);
//     // The below line is for the remainde
//     printf("a%b=%d \n", a % b);
//     printf("The subtraction is : a-c=%f \n", a - c);
//     printf("a==d %d \n", a == d);
//     printf("a+e= %d \n", a && e);
//     printf("a+b= %d \n", a && b);
//     printf("a+b= %d \n", a || b);
//     printf("a+b= %d \n", !a);
//     return 0;
// }

/*
Relational operatos
1. == is equal to
2. != not equal to
3. > greater than
4. < less than
5. >= greater or equal
6. <= less than or equal
*/
// Relational operators always return a boolean True or False

// Logical Operators ---------------------
/*
1. && logical and
2. || logical or
3. ! logical not
*/

// bitwise operators ------------------
#include <stdio.h>
int main()
{
    int a = 2, b = 3;
    printf("a & b = %d \n", a & b);
    printf("a | b = %d \n", a | b);

    return 0;
}
// Exclusive or takes one true and one false. Then it will return true,false otherwise

// Other important bitwise operators
// 1. ~ ones compliment
// 2. << binary left shift
// 3. >> binary right shift

// assignment operators
// =,+=,-=,*=,/=

// Miscellaneours operators
// sizeof(),&= address of a var,* = pointer ot a var,?: conditional expression

// Operator precedences
// Postfix+Unary+Mul+Add+Sift+R+Eq+bit and + bit xor +bit or
// log and + log or + cond + assign + comma