#include <stdio.h>

int main(){
    int days, fine;
    printf("enter the number of late days:");
    scanf("%d", &days);

    if (days <= 5)
    {
    fine = days * 2;
    printf("Fine = %dRs", fine);}
    else if (days <= 10)
    {
    fine = (5 * 2) + (days - 5) * 4;
    printf("Fine = %dRs", fine);}
    else if (days <= 30)
    {
    fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
    printf("Fine = %dRs", fine);}
    else
    {
    printf("Membership Cancelled");}
    return 0;
}