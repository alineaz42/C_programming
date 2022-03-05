#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    char name[54];
    char deg[54];
    char dept[54];
    // } s1, s2, s3;
};
void show_student(int roll)
{
    struct Student s1, s2, s3;
    s1.id = 1722001;
    strcpy(s1.name, "Hasan Shariar");
    strcpy(s1.deg, "B.Sc");
    strcpy(s1.dept, "Statistics");
    s2.id = 1722002;
    strcpy(s2.name, "Toufik Azom");
    strcpy(s2.deg, "B.Sc");
    strcpy(s2.dept, "Statistics");
    s3.id = 1722003;
    strcpy(s3.name, "Araf Mahmud Anik");
    strcpy(s3.deg, "B.Sc");
    strcpy(s3.dept, "Statistics");
    switch (roll)
    {
    case 1:
        printf("Name is: %s\n", s1.name);
        printf("Roll is: %d\n", s1.id);
        printf("Deg is: %s\n", s1.deg);
        printf("Department is: %s\n", s1.dept);
        break;
    case 2:
        printf("Name is: %s\n", s2.name);
        printf("Roll is: %d\n", s2.id);
        printf("Deg is: %s\n", s2.deg);
        printf("Department is: %s\n", s2.dept);
        break;
    case 3:
        printf("Name is: %s\n", s3.name);
        printf("Roll is: %d\n", s3.id);
        printf("Deg is: %s\n", s3.deg);
        printf("Department is: %s\n", s3.dept);
        break;

    default:
        printf("Please Enter the right keyward\n");
        break;
    }
}

int main()
{
    int roll;
    printf("Enter the roll of the students: \n");
    scanf("%d", &roll);
    show_student(roll);
    return 0;
}