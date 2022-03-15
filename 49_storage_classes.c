// Storage Classes In C Auto, Extern, Static & Register Storage Classes: C Tutorial In Hindi #49
#include <stdio.h>
// four types of storage classes
// 01. auto
// 02 extern
// 03 statis
// 04 register
int age;
age = 65;
void for_static()
{
    static int a = 0;
    printf("%d\n", a);
    a++;
}

int main()
{
    register int size = 36; // declaration and definition of register variable
    int ali;
    printf("%d\n", ali);
    ali = 32;
    printf("%d\n", ali);
    for (int i = 1; i <= 10; i++)
    {
        for_static();
    }
    printf("From xtern %d\n", age);
    return 0;
}