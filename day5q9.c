#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, si, ci, amount;
    printf("Enter principal:");
    scanf("%f", &p);
    printf("Enter rate:");
    scanf("%f", &r);
    printf("Enter time:");
    scanf("%f", &t);

    si = (p * r * t) / 100;
    amount = p * pow(1 + r / 100, t);  //doubt
    ci = amount - p;

    printf("Simple Interest is %f\n", si);
    printf("Compound Interest is %f\n", ci);

    return 0;
}