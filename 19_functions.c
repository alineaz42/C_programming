#include <stdio.h>
int sum(int a, int b);
void printstar(int n);
int takeNum();
void printMyName();
// the user defind function could also be written here insted of bellow main function

int main()
{
    int a, b, c, d;
    a = 78;
    b = 74;
    c = sum(a, b);
    // printf("the sum of a and b is : %d\n", c);
    // printstar(7);
    // d = takeNum();
    // printf("The num from takeNum is: %d\n", d);
    // printMyName();
    printf("the ans is: \n", sum(a, b));
    return 0;
}
// with arg with return val
int sum(int a, int b)
{
    return a + b;
}
// with arg and without return val
void printstar(int n)
{
    int i = 1;
    while (i < n)
    {
        printf("%c\n", '*');
        // double quots string
        // single quots character
        i++;
    }
}
// without arg and with return
int takeNum()
{
    int i;
    printf("Enter a num: \n");
    scanf("%d", &i);
    return i;
}
// without arg and without return
void printMyName()
{
    char a;
    printf("Enter a char name: \n");
    scanf("%c", &a);
    printf("The char you entered is : %c\n", a);
}
/*
1. functions are used to divide a large c program into small er pieces
2. a function can be called multiple times to provide reusability and modularity to the c programm
3. also called procedure or subroutine
*/
/*
Library functions
user defined function
*/
// without arg and without return val
// with are and without return val
// without arg and with return val
// with arg and with return value