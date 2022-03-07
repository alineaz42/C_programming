// union is also a data type like structure
// structure get diff location depending on the type of var using
// in union all the var gets same shared location of storage
// var.member . is the member access operator
// use union when you need one member at a time
// otherwise use structure
#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char name[54];
    char fav_char[15];
};
union Student2
{
    int id;
    int marks;
    char name[54];
    char fav_char[15];
};

int main()
{
    // struct Student s1;
    union Student2 s1; // using more than one var in union will currapt other at same time
    // printf("%d %d %d\n", sizeof(int), sizeof(float), sizeof(char));
    printf("The size of Student : %d\n", sizeof(s1));
    // printf("The size of Student2 : %d\n", sizeof(s2));
    s1.id = 1722019;
    s1.marks = 55;
    strcpy(s1.fav_char, "Panda");
    strcpy(s1.name, "Neaz Ali");
    // printf("%d %d %c %s\n", s1.id, s1.marks, s1.fav_char, s1.name);
    printf("%d\n", s1.id);
    printf("%d\n", s1.marks);
    printf("%s\n", s1.name);
    printf("%s\n", s1.fav_char);
    // printf("%d", s1.id);
    return 0;
}