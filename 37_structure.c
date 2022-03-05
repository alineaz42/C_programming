#include <stdio.h>
#include <string.h>
// user defined data type
// used to combie diff data types

struct Student
{
    int id;
    float marks;
    // char name[54];
    // char fav_char[54];
    char name[54];
};
void info(char a[54])
{
    struct Student student1;
    int id1, age1;
    char class1[54];
    printf("Enter id \n");
    scanf("%d", &id1);
    printf("Enter age \n");
    scanf("%d", &age1);
    printf("Enter class \n");
    gets(class1);             // problem is here
    student1.name = *a;       // problem is here
    printf("\nName is: %s "); // problem is here
}
int main()
{
    char name[54];
    printf("Enter name: \n");
    gets(name);
    // printf("Enter Option\n 1\n2\n3\n4\n: \n");
    // scanf("%d", &n);
    // printf("%d\n", n);

    info(name);
    // puts(name);

    return 0;
}

// int main()
// {
//     struct Student neaz, araf, shamim;
//     neaz.id = 1722019;
//     neaz.marks = 75.66;
//     gets(neaz.fav_char);
//     araf.id = 1722019;
//     araf.marks = 75.66;
//     gets(araf.fav_char);
//     shamim.id = 1722019;
//     shamim.marks = 75.66;
//     gets(shamim.fav_char);

//     printf("\n Id: %d\n Marks: %f\n Favrit Charecter: %s\n", neaz.id, neaz.marks, neaz.fav_char);

//     return 0;
// }