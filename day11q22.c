#include <stdio.h>

int main()
{
    float cp, sp, profit, loss, percentage;
    printf("enter cost price: ");
    scanf("%f", &cp);
    printf("enter selling price: ");
    scanf("%f", &sp);

    if (sp > cp){
    profit = sp - cp;
    percentage = (profit / cp) * 100;
    printf("profit = %f\n", profit);
    printf("profit percentage %f%%", percentage);
    }
    else if (cp > sp){
    loss = cp - sp;
    percentage = (loss / cp) * 100;
    printf("Loss = %f\n", loss);
    printf("Loss Percentage %f%%", percentage);
    }
    else
    {printf("No Profit, No Loss");}

    return 0;
}