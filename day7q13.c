#include <stdio.h>
int main() {
    int year, leap_year;
    printf("Enter a year:");
    scanf("%d", &year);
    if ((year % 400 == 0) || (year % 4 == 0))
    printf("the year is a leap year");
    else printf("the year is not a leap year");
    return 0;
}