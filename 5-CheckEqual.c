#include <stdio.h>
int main()
{
    int FirstNumber, SecondNumber;
    printf("Enter the first number to compare: ");
    scanf("%d", &FirstNumber);
    printf("Enter the second number to compare: ");
    scanf("%d", &SecondNumber);
    if(FirstNumber == SecondNumber)
    {
        printf("Both numbers are Equal");
    }
    else{
        printf("Both numbers are not Equal");
    }
    
}