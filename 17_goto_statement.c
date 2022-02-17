/*
also called jump statement in c
used to transfer program control to predefined label
its use is avoided since it causes confusion for the gellow programmers in understanding the code
goto statement is preferable when we need to break multiple loops using a single statement at the same time
*/
// #include <stdio.h>
// int main()
// {
//     label:
//         printf("We are inside label");
//         goto end;
//         printf("Hello Wolrd\n");
//         goto label;
//     end:
//         printf("We are at end");
//         return 0;
// }

#include <stdio.h>
int main()
{
    int num, i, j;
    for (i = 0; i <= 2; i++)
    {
        printf("%d \n", i);
        for (j = 0; j <= 2; j++)
        {
            printf("Enter the number.Enter 0 to exit.\n");
            scanf("%d", &num);
            if (num == 0)
            {
                // break;
                goto end;
            }
        }
    }
end:
    return 0;
}