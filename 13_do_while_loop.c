// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     do
//     {
//         printf("%d\n", i);
//         i++;
//     } while (i < 10);
//     printf("The programm is finished....");
//     return 0;
// }

// do while loop executes at least once
#include <stdio.h>
int main()
{
    int index = 0, num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    do
    {
        printf("The number is: %d\n", index);
        // if (){
        //     printf("%d\n",index);
        // }
        index++;
    } while (index < num);
    return 0;
}