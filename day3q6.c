#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter numbers a:");
    scanf("%d", &a);
    printf("Enter numbers b:");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("After swapping:");
    printf("a is %d and b is %d", a,b);

    return 0;
}