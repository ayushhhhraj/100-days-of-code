#include <stdio.h>

int main(){
    int units, electricity_bill;
    printf("enter the number of units consumed:");
    scanf("%d", &units);

    if (units <= 100)
    {
    electricity_bill = units * 5;
    printf("Electricity Bill = %dRs", electricity_bill);}
    else if (units <= 200)
    {
    electricity_bill = (100 * 5) + (units - 100) * 7;
    printf("Electricity Bill = %dRs", electricity_bill);}
    else if (units <= 300)
    {
    electricity_bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    printf("Electricity Bill = %dRs", electricity_bill);}
    else if (units > 300)
    {
    electricity_bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    printf("Electricity Bill = %dRs", electricity_bill);
    }return 0;
}