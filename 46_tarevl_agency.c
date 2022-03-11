// this is basically a problem to solve instructions are given below:
#include <stdio.h>
#include <string.h>

typedef struct Driver
{
    char name[36];
    char dlNo[55];
    char route[40];
    int kms;
} dr;

int main()
{
    dr d1;
    printf("\nEnter the details of the driver:\n");
    // driver One
    printf("Enter the name of the first driver:\n");
    scanf("%s", &d1.name);

    printf("Enter the dlNo of the first driver:\n");
    scanf("%s", &d1.dlNo);

    printf("Enter the route of the first driver:\n");
    scanf("%s", &d1.route);

    printf("Enter the kms of the first driver:\n");
    scanf("%d", &d1.kms);
    // printf("The kms is: %d\n", d1.kms);
    printf("*****the details of the first driver*****\n");
    printf("The Name is: %s\n", d1.name);
    printf("The Driving License no is: %s\n", d1.dlNo);
    printf("The Route is: %s\n", d1.route);
    printf("The Km/s is: %d\n", d1.kms);

    return 0;
}

// insttructions
/*
You manage a travel agency, and you want your n drivers to input their following details:

Name of the driver
Driving License Number
Route
Kms
Your program should be able to take n as input (or you can take n=3 for simplicity), and your drivers will start inputting their details one by one. Your program should print details of the drivers in a beautiful fashion. For this task, you have to use Structure only. These four inputs: name, driving license number, route, and km information will be struct members. After creating struct, you have to create its array of size “n.
*/