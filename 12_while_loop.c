// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     while (i <= 100)
//     {
//         printf("%d\n", i);
//         i++;
//     }
// }

#include <stdio.h>
int main()
{
    int i = 0, num;
    printf("Enter the num: ");
    scanf("%d", &num);
    while (i <= num)
    {
        printf("%d\n", i);
        i = i + 1;
    }
    return 0;
}