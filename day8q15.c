#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);

    switch (ch) {
    case  'A'...'Z':
    printf("Uppercase alphabet");
    break;

    case  'a'...'z':
    printf("Lowercase alphabet");
    break;

    case  '0'...'9':
    printf("Digit");
    break;

    default:
    printf("Special character");
    }

    return 0;
}