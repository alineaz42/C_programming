#include <stdio.h>
#include <string.h>

// int main()
// {
//     char name[55] = "Ali";
//     char name2[55] = " Neaz", fn[54];
//     printf("The strcmp: %d\n", strcmp(name, name2));
//     // puts(strcat(name, name2));
//     // printf("%d\n", strlen(name));
//     // printf("%d\n", strlen(name2));
//     // puts(strrev(name));
//     // puts(strrev(name2));
//     strcpy(fn, strcat(name, name2));
//     puts(fn);
//     return 0;
// }

int main()
{
    char firstName[54], secondName[54];
    printf("Enter First Name: \n");
    gets(firstName);
    printf("Enter second name: \n");
    gets(secondName);
    puts(strcat(firstName, secondName));
    return 0;
}