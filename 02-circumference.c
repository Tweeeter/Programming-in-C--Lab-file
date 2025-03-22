#include <stdio.h>
int main()
{
    float radius, circumference;
    printf("enter the radius: ");
    scanf("%f", &radius);
    circumference = 2*3.14*radius;
    printf("Circumference of the Circle with radius %.2f Unit is: %.2f Units \n",radius, circumference);
    return 0;
}
