#include <stdio.h>
int main() {
    int three_digit_number, middle_digit;

    printf("Enter a three digit number:");
    scanf("%d", &three_digit_number);
    middle_digit = (three_digit_number / 10) % 10;
    printf("The middle digit is %d", middle_digit);

    return 0;
}