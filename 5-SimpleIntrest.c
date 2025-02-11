#include <stdio.h>
int main()
{
    float principal, interest, time, AmountOwed, InterestIncurred;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the interest : ");
    scanf("%f", &interest);
    printf("Enter the time in Year: ");
    scanf("%f", &time);
    InterestIncurred = ((principal*interest*time)/100);
    AmountOwed = InterestIncurred + principal;

    printf("Amount of interest to be paid: %.2f\n", InterestIncurred);
    printf("Amount to be repayed: %.2f", AmountOwed);
    return 0;
}