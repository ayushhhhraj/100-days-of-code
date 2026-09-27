//Write a program to check if a number is a palindrome.

#include <stdio.h>
int main() {
    int n, original, reversed = 0, digit;
    printf("Enter a number:");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
    return 0;
}
