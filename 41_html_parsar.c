#include <stdio.h>
#include <string.h>
void parser(char *string)
{
    int in = 0; // to see whether we are inside the tag
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    // remove the trailing space from the begining
    while (string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
    // remove the trailing space from the end
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}
int main()
{
    char string[] = "<h1>      This is heading one           </h1>";
    char string2[] = "<p>This paragraph is parsing from dash dash.....";
    printf("%s\n", string);
    parser(string);
    parser(string2);
    printf("The parsed string is ~~%s~~\n", string);
    printf("The parsed string is ~~%s~~\n", string2);
    return 0;
}

// void parser(char *str)
// {
//     int in = 0;
//     int index = 0;
//     for (int i = 0; i < strlen(str); i++)
//     {
//         if (str[i] == '<')
//         {
//             in = 1;
//             continue;
//         }
//         else if (str[i] == '>')
//         {
//             in = 0;
//             continue;
//         }
//         if (in == 0)
//         {
//             str[index] = str[i];
//             index++;
//         }
//     }
//     str[index] = '\0';
//     while (str[0] = ' ')
//     {
//         for (int i = 0; i < strlen(str); i++)
//         {
//             str[i] = str[i + 1];
//         }
//     }
//     while (str[strlen(str) - 1] == ' ')
//     {
//         str[strlen(str) - 1] = '\n';
//     }
// }

// int main()
// {
//     char par[] = "<h1> This is a heading</h1>";
//     parser(par);
//     printf("The parsed string is: %s\n", par);
//     return 0;
// }

// original code

// void parser(char *string)
// {
//     int in = 0; // Variable to track whether we are inside the tag
//     int index = 0;
//     for (int i = 0; i < strlen(string); i++)
//     {
//         if (string[i] == '<')
//         {
//             in = 1;
//             continue;
//         }
//         else if (string[i] == '>')
//         {
//             in = 0;
//             continue;
//         }
//         if (in == 0)
//         {
//             string[index] = string[i];
//             index++;
//         }
//     }
//     string[index] = '\0';

//     // Remove the trailing spaces from the beginning
//     while (string[0] == ' ')
//     {
//         // Shift the string to the left
//         for (int i = 0; i < strlen(string); i++)
//         {

// string[i] = string[i + 1];
// }
// }
// // Remove the trailing spaces from the end
// while (string[strlen(string) - 1] == ' ')
// {
//     string[strlen(string) - 1] = '\0';
// }
// }

// int main()
// {
//     char string[] = "    <harrysdfsdfsdf>this is a heading    </harry>     ";
//     parser(string);
//     printf("The parsed string is ~~%s~~", string);
//     return 0;
// }
