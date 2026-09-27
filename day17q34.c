//Write a program to check if a number is prime.

#include <stdio.h>
int main() {
    int n, i, prime_num = 1;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 2; i <= n/2; i++) {
    if (n % i == 0) {
    prime_num = 0;
    break;
    }}
    if (prime_num == 1) {
    printf("%d is a prime number\n", n);
    }
    else {
    printf("%d is not a prime number\n", n);
    }
    return 0;
}