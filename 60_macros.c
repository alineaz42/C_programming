#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
#define Area
int main()
{
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    printf("File name is: %s\n", __FILE__);
    printf("Todays data is: %s\n", __DATE__);
    printf("Line no is: %d\n", __LINE__);
    printf("ansic: %d\n", __STDC__);

#ifdef Area
    printf("The area of the circel is: %f\n", PI * r * r);
#endif
    printf("the area circumference of the circle is: %f\n", 2 * PI * r);
    return 0;
}