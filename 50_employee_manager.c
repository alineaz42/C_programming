// Employee Manager In C - Exercise 8 Solution: C Tutorial In Hindi #50

#include <stdio.h>

int main()
{
    int chars, i = 0;
    char a, b;
    char *ptr;
    while (i < 3)
    {
        printf("Emp %d: enter char in emp id\n", i + 1);
        scanf("%d", &chars);
        // getchar();
        printf("Enter the value of a\n");
        scanf("%c", &a);
        printf("Enter the value of b\n");
        scanf("%c", &b);
        ptr = (char *)malloc((chars + 1) * sizeof(char));
        printf("Enter your emp id: \n");
        scanf("%s", &ptr);
        printf("your emp; id is %s\n", ptr);
        free(ptr);
        i = i + 1;
    }
    return 0;
}
/* original code
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int chars, i = 0;
    char a, b;
    char *ptr;
    while (i < 3)
    {
        printf("Employee %d: Enter the number of characters in your Employee Id\n", i+1);
        scanf("%d", &chars);
        getchar();
        printf("Enter the value of a\n");
        scanf("%c", &a);
        getchar();
        printf("Enter the value of b\n");
        scanf("%c", &b);
        ptr = (char *) malloc((chars+1)*sizeof(char));
        printf("Enter your Employee Id\n");
        scanf("%s", ptr);
        printf("Your Employee Id is %s\n",ptr );
        free(ptr);
        i = i + 1;
    }

    return 0;
}
*/