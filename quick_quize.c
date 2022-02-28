#include <stdio.h>
int get_sum_sub(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    return 0;
}
int main()
{
    int a, b;
    printf("Enter num a: \n");
    scanf("%d", &a);
    printf("Enter num b: \n");
    scanf("%d", &b);
    get_sum_sub(&a, &b);
    printf("The sum is : %d\n", a);
    printf("The sub is: %d\n", b);
    return 0;
}