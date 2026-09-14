#include <stdio.h>
int main() {
    float percentage;
    printf("enter the percentage:");
    scanf("%f", &percentage);
    if(percentage>=90)
    printf("the grade is A");
    else if(percentage>=80)
    printf("the grade is B");
    else if(percentage>=70)
    printf("the grade is C");
    else if(percentage>=60)
    printf("the grade is D");
    else
    printf("the grade is F");
    return 0;
}