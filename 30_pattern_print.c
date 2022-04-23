#include <stdio.h>
int print_star(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int num;
    printf("Enter the num: \n");
    scanf("%d", &num);
    // printf("The stars age given below%c", print_star(num));
    print_star(num);
    return 0;
}