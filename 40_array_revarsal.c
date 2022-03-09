// #include <stdio.h>

// void ar_rev(int arr[])
// {

//     int temp;
//     for (int i = 0; i < 8; i++)
//     {
//         temp = arr[i];
//         arr[i] = arr[7 - i];
//         arr[7 - i] = temp;
//         if (i == 3)
//         {
//             break;
//         }
//     }
//     // for (int i = 0; i < 8; i++)
//     // {
//     //     printf("%d\n", arr[i]);
//     // }
// }
// void ar_rev2(int arr[])
// {
//     int temp;
//     for (int i = 0; i < 5 / 2; i++)
//     {
//         temp = arr[i];
//         arr[i] = arr[4 - i];
//         arr[4 - i] = temp;
//     }
// }
// int main()
// {
//     // printf('Hello World\n');
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int arr2[] = {3, 4, 5, 6, 7};
//     for (int i = 0; i < 8; i++)
//     {
//         printf("%d\n", arr[i]);
//     }

//     ar_rev(arr);
//     ar_rev2(arr2);
//     // printf("%d\n", sizeof(arr));
//     printf("After reversing\n");
//     for (int i = 0; i < 8; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
//     // printf("%d", *arr2);
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", arr2[i]);
//     }
//     return 0;
// }
#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[54];
    int age;
};

void rev_arr(int arr[10])
{
    int i = 0, temp;
    for (i; i < 10; i++)
    {
        temp = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = temp;
        if (i == 4)
        {
            break;
        }
    }
}

int main()
{
    struct student stu;
    stu.id = 1722019;
    stu.age = 54;
    strcpy(stu.name, "Neaz Ali");
    // printf('Hello World');
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("After reversing the array..\n");
    rev_arr(arr);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    int i = 1;
    while (i > 0)
    {
        /* code */
        int a;
        printf("Enter what do you want\n");
        printf("1 For Id\n\n");
        printf("2 For Name\n\n");
        printf("3 For Age\n\n");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            printf("Your Id is: %d\n", stu.id);
            continue;
        case 2:
            printf("Your Name is: %s\n", stu.name);
            continue;
        case 3:
            printf("Your Age is: %d\n", stu.age);
            continue;
        case 0:
            printf("Thank you sir\n\n");
            i = 0;
            continue;

        default:
            printf("Enter the right keyward:\n");
            continue;
        }
    }

    return 0;
}