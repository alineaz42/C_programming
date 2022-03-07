
#include<stdio.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[54];
}s1,s2;

typedef struct Student2
{
    int id;
    int marks;
    char fav_char;
    char name[54];
}std;
int main()
{

    typedef int* intPtr;
    intPtr a,b,c=55;
    a=&c;
    b=&c;
    printf("%d \n%d\n",a,b);
    printf("%p \n%p\n",*a,*b);


    /*
    // typedef can be used to call any data type in different name
    // also Student can be called using struct Student s1,s2;
    std u4; // only use the typedef name not struct again
    u4.id=55;
    s1.id=35;
    typedef unsigned long ul;
    ul u1,u2,u3;
    typedef int integer;
    integer a=20;
    printf("%d\n",a);

    printf("The id of student1 is: %d\n",s1.id);
    printf("The id of student4 is: %d\n",u4.id);
    */
    return 0;
}
