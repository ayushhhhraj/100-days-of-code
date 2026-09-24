//Write a program to calculate the factorial of a number.

#include <stdio.h>
int main() {
    int n, i, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i<=n; i++) 
    {factorial = factorial * i;}
    printf("Factorial of the number %d is %d", n, factorial);
    return 0;
}