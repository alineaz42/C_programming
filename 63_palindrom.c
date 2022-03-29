#include <stdio.h>
#include <stdlib.h>
int isPalindrom(int num)
{
    int reverse = 0, remainder;
    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    return reverse;
}
int main()
{
    int number, returned;
    printf("Enter a number to check if it is palindrom or not\n");
    scanf("%d", &number);
    // isPalindrom();
    printf("The entered number is: %d\n", number);
    returned = isPalindrom(number);
    if (number == returned)
    {
        printf("The number %d is palindrom.\n", number);
    }
    else
    {
        printf("The number %d is not palindrom\n", number);
    }
    printf("The returned numberis: %d\n", isPalindrom(number));
    return 0;
}
