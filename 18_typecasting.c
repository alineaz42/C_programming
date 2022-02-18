#include <stdio.h>
//(type)value;
int main()
{
    printf("Hello World\n");
    int a = 3;
    float b = 4.14;
    printf("the value of a is %d\n", a);
    printf("Integer of b  is %d\n", (int)b);
    printf("The float of a is %0.2f\n", (float)a);
    float c = 45 / 4, d = (float)54 / 5;
    printf("%f\n", c);
    // float ;
    printf("The d is: %f\n", d);
    return 0;
}
// Type conversion is converting one type data to another type