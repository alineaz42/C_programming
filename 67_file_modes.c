#include <stdio.h>
// #include <stdlib.h>

int main()
{
    FILE *f = NULL;
    // f = fopen("test.txt", "r");
    // printf("%s", f);
    //######fgetc
    /*
    char c;
    for (int i = 0; i < 10; i++)
    {
        c = fgetc(f);
        printf("%c", c);
    }
    fclose(f);
    */
    //------------fgets

    /*
    char str[54];
    fgets(str, 5, f);
    printf("%s\n", str); // one less because of null char

    */

    //-----------fputc
    // f = fopen("test2.txt", "r+");
    // f = fopen("test2.txt", "w+");
    f = fopen("test2.txt", "a+");
    // fputc('o', f);
    // fputs("this feels so good", f);
    fputs("this is neo\n", f);
    fclose(f);
    // char string[254] = "hello world";
    // // f = fopen("test.txt", "r");
    // // fscanf(f, "%s", string);
    // // printf("The text inside the file %s\n", string);
    // // fclose(f);
    // printf("Enter what you want : \n");
    // // scanf("%[^\n]%*s", &string);
    // scanf("%[^\n]%c", &string);
    // printf("the code are: %s\n", string);
    return 0;
}

// File modes, fgets, fputs, fgetc, fputc & more on C file handling: C Tutorial In Hindi #67
// https://codewithharry.com/videos/c-language-tutorials-in-hindi-67