#include <stdio.h>
int main()
{
    int var1, var2, tempvar;
    printf("Enter the First number to swap: ");
    scanf("%d", &var1);
    printf("Enter the Second number to swap: ");
    scanf("%d", &var2);
    printf("Variable before swaping Var1 = %d Var2 = %d \n", var1, var2);
    tempvar = var1;
    var1 = var2;
    var2 = tempvar;
    printf("Variable after swaping Var1 = %d Var2 = %d \n", var1, var2);
    return 0;
}