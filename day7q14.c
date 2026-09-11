#include <stdio.h>
int main() {
    char character, vowel, consonant;
    printf("Enter a character:");
    scanf("%c", &character);
    if (character == 'a' || character == 'e' || character == 'i' || character== 'o' || character == 'u')
    printf("The character is a vowel\n");
    else 
    printf("The character is a consonant\n");
  return 0;

    }
