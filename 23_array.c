#include <stdio.h>

int main()
{
    int marks[5], i, names[5] = {43, 23, 43, 54, 65};
    // printf("%d\n,", sizeof(marks));
    // marks[0] = 55;
    // marks[1] = 84;
    // two dimensinal array
    int j, marks2[2][4] = {{1, 2, 3, 4}, {4, 3, 2, 1}};

    // printf("%d\n", marks[1]);
    // for (i = 0; i < 5; i++)
    // {
    //     printf("Enter the num %d: \n", i);
    //     scanf("%d", &marks[i]);
    //     // marks[i]=marks[]
    // }
    // for (i = 0; i < 5; i++)
    // {
    //     printf("The value is %d: %d\n", i + 1, marks[i]);
    // }
    // for (i = 0; i < 5; i++)
    // {
    //     printf("The value is %d: %d\n", i + 1, names[i]);
    // }
    // for (i = 0, j = 0; i < 2, j < 4; i++, j++)
    // {
    //     printf("%d %d %d \n", i, j, marks2[i][j]);
    // }
    printf("The time complexity of the following programm is: n square\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d %d %d\n", i, j, marks2[i][j]);
        }
    }
    return 0;
}
// i can creat any dimension array