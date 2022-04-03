#include <stdio.h>
#include <stdlib.h>
int isPalindrom(int num)
{
    int remainder, reversedNumber = 0;
    while (num != 0)
    {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }
    return reversedNumber;
}
int main()
{
    int yourNumber = 0, returenedNumber = 0;
    printf("Enter a number: \n");
    scanf("%d", &yourNumber);
    returenedNumber = isPalindrom(yourNumber);
    if (returenedNumber == yourNumber)
    {
        printf("The number is palindrom\n");
    }
    else
    {
        printf("The number is not palindrom\n");
    }
    printf("Returned number is: %d\n", returenedNumber);
    return 0;
}