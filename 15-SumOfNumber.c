#include<stdio.h>

int main() 
{ 
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits: %d\n", getSum(n));
    return 0; 
}

int getSum(int n) //Function to get sum of digits 
{ 
    int sum = 0; 
    while (n != 0) 
    { 
        sum = sum + n % 10; 
        n = n / 10; 
    } 
    return sum; 
} 

