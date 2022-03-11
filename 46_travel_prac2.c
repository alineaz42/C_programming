#include <stdio.h>
#include <string.h>
// facing the problem the int_info running always if once called
typedef struct Driver
{
    char name[54];
    char dlNo[54];
    char route[54];
    int kms;
} dr;
dr d1;

void int_info()
{
    printf("Enter the Information of the driver:\n\n");

    printf("Enter the name of the first driver: \n");
    scanf("%s", &d1.name);
    printf("Enter the dlNo : \n");
    scanf("%s", &d1.dlNo);
    printf("Enter the Route : \n");
    scanf("%s", &d1.route);
    printf("Enter the km/s : \n");
    scanf("%d", &d1.kms);
}

void print_info()
{
    printf("The Name of the first driver is: %s\n", d1.name);
    printf("The Route of the first driver is: %s\n", d1.route);
    printf("The dlNo of the first driver is: %s\n", d1.dlNo);
    printf("The Kms of the first driver is: %d\n", d1.kms);
}

int main()
{
    int choice, run = 0;
    printf("Enter what do you want to do:\n");
    printf("1. For entering the information of the driver.\n\n");
    printf("2. For printing the information of the driver.\n\n");
    scanf("%d", &choice);
    while (run == 0)
    {
        switch (choice)
        {
        case 1:
            int_info();
            run = 1;
            break;
        case 2:
            print_info();
            run = 1;
            break;
        case 3:
            run = 1;
            break;

        default:
            printf("Thank You\n");
            break;
        }
    }

    return 0;
}