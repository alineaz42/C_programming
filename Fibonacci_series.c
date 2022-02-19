#include <stdio.h>

// this is not the desired programm i am looking for but its working
int fs(int n)
{
    // Base case
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        // recursive case
        return (n + fs(n - 1));
    }
}

int main()
{
    int n;
    printf("Enter the num: \n");
    scanf("%d", &n);
    printf("The fibonacci series of %d is %d\n", n, fs(n));
    return 0;
}
/*

*/