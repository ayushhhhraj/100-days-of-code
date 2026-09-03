#include <stdio.h>

int main() {
    float a, b;

    printf("Enter numbers a and b:");
    scanf("%f %f", &a, &b);
    printf("Sum is %f\n", a + b);
    printf("Difference is %f\n", a - b);
    printf("Product is %f\n", a * b);
    printf("Quotient is %f\n", a / b);

    return 0;
}