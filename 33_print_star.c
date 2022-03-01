#include <stdio.h>
// for forward triangular press 1. for revers triangular press 2
void print_star(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        // print stars
        for (int j = 0; j <= i; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }
}

void print_star2(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - i; j++)
        { // may be i should use j<a-i-1 if <= then a-i-1 if < a-i
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows, press;
    printf("Enter how many rows you want: \n");
    scanf("%d", &rows);
    printf("1 for regular triangle\n2 for reverse triangle: \n");
    scanf("%d", &press);
    // print_star(rows);
    // printf("Revers star print\n");
    // print_star2(rows);
    // if (press == 1)
    // {
    //     printf("Your stars are as follows\n");
    //     print_star(rows);
    // }
    // else if (press == 2)
    // {
    //     printf("Your stars are as follows\n");
    //     print_star2(rows);
    // }

    // using switch
    switch (press)
    {
    case 1:
        print_star(rows);
        break;
    case 2:
        print_star2(rows);
        break;

    default:
        printf("use the right keyward\n");
        break;
    }

    return 0;
}