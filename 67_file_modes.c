#include <stdio.h>
// #include <stdlib.h>

int main()
{
    FILE *f = NULL;
    char string[254] = "hello world";
    // f = fopen("test.txt", "r");
    // fscanf(f, "%s", string);
    // printf("The text inside the file %s\n", string);
    // fclose(f);
    printf("Enter what you want : \n");
    // scanf("%[^\n]%*s", &string);
    scanf("%[^\n]%c", &string);
    printf("the code are: %s\n", string);
    return 0;
}

// File modes, fgets, fputs, fgetc, fputc & more on C file handling: C Tutorial In Hindi #67
// https://codewithharry.com/videos/c-language-tutorials-in-hindi-67