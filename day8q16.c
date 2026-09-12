#include <stdio.h>

int main() {
    int number, a, b, c;
    printf("Enter a number a:");
    scanf("%d", &a);
    printf("Enter a number b:");
    scanf("%d", &b);
    printf("Enter a number c:");
    scanf("%d", &c);

    if (a > b && a > c) 
    printf("a is the largest number\n");
    else 
    printf("a is not the largest number\n");

    if (b > a && b > c) 
    printf("b is the largest number\n");
    else
    printf("b is not the largest number\n");

    if (c > a && c > b) 
    printf("c is the largest number\n");
    else
    printf("c is not the largest number");

    return 0;
}