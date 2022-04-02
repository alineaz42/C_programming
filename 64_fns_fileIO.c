#include <stdio.h>
// #include <stdlib.h>

int main()
{

    FILE *ptr = NULL;
    // char string[34];
    char string2[50] = "This  text is for the file write";
    // ******************reading a file******************
    // ptr = fopen("test.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("Inside test.txt: %s\n", string);
    // ******************writing a file******************
    // ptr = fopen("test2.txt", "w");
    // fprintf(ptr, "%s", string2);
    // *****************append mode*****************
    ptr = fopen("test2.txt", "a");
    fprintf(ptr, "%s", string2);
    return 0;
}
// https://codewithharry.com/videos/c-language-tutorials-in-hindi-64
//  go to this site for further information