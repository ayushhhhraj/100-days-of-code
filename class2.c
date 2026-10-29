#include <stdio.h>
int factorial(unsigned int i);
void  main() 
{ int i;
printf("Enter any number: ");
scanf("%d",&i);
printf("Factorial of %d is %d\n", i, factorial(i));
}
int factorial(unsigned int i) 
{   
if(i <= 1) 
return 1;   
return i * factorial(i - 1);
}
