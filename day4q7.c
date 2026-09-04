#include <stdio.h>

int main() {
    int a, b;
    printf("Enter numbers a:");
    scanf("%d", &a);
    printf("Enter numbers b:");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping:\n");
    printf("a is %d\n", a);
    printf("b is %d\n", b);

    return 0;
}