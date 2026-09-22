#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("enter number a:");
    scanf("%d", &a);
    printf("enter operator:");
    scanf(" %c", &op);
    printf("enter number b:");
    scanf("%d", &b);

    switch(op)
    {
        case '+':
        printf("%d", a + b);
        break;

        case '-':
        printf("%d", a - b);
        break;

        case '*':
        printf("%d", a * b);
        break;

        case '/':
        printf("%d", a / b);
        break;
        
        default:
        printf("invalid operator");
    }

    return 0;
}