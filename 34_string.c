// to store string u need more than one index in the array
// \0 is null char need to use at the end of the array to terminate
// string is not a data type but null terminated char array
#include <stdio.h>

void print_str(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}

int main()
{
    // char str[] = {'n', 'e', 'a', 'z', '\0'};
    char str[] = "neaz";

    // taking input str from the user
    char str2[44];
    gets(str2); // scanf cant take the white space or blank space
    puts(str);
    // printf(str2);
    printf("using printf %s\n", str2);
    // need to use gets
    // gets(str);
    // str[6] = "Hello";
    // printf("%s\n", str);
    // print_str(str);
    // printf("%d\n", sizeof(str));=5

    // printf("Hey bro \n", str);
    printf(str);
    return 0;
}