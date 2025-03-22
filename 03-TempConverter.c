#include <stdio.h>
int main()
{
    float centigrade, fahrenheit;
    printf("Enter temp in C: ");
    scanf("%f", &centigrade);
    fahrenheit = ((centigrade*(9.0/5.0))+32);
    printf( "%.2f centigrade is equal to %.2fF", centigrade, fahrenheit);
    return 0;
}
