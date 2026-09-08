#include <stdio.h>
int main(){
    int positive, negative, zero, number;
    printf("enter a number:");
    scanf("%d",&number);
    if(number>0)
    printf("the number is positive\n");
    else printf("the number is not positive\n");
    if(number<0)
    printf("the number is negative\n");
    else printf("the number is not negative\n");
    if(number==0)
    printf("the number is zero\n");
    else printf("the number is not zero\n");
    return 0;
}