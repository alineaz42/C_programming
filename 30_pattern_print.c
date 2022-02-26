#include <stdio.h>
int print_star(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%c", '*' * i);
    }
}
int main()
{
    int num;
    printf("Enter the num: \n");
    scanf("%d", &num);
    printf("The stars age given below%c", print_star(num));
    return 0;
}