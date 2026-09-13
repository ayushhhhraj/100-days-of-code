#include <stdio.h>
int main() {
    float a, b, c, d;
    printf("Enter number a:");
    scanf("%f", &a);
    printf("Enter number b:");
    scanf("%f", &b);
    printf("enter number c:");
    scanf("%f", &c);

    (d = b * b - 4 * a * c );
    printf("The value of d is %f\n", d);

    if (d > 0) {
    printf("Roots are real and different\n");
    }
    else if (d == 0) {
    printf("Roots are real and equal\n");
    }
    else {
    printf("roots are complex\n");
    }
    
    return 0;
}