#include<stdio.h>
void main()
{
int i=5, *j;
j=&i;
printf("%d\n",&i);
printf("%d\n",j);
printf("%d\n",&j);
printf("%d\n",j);
printf("%d\n",i);
printf("%d\n",*(&i));
printf("Value of i = %d\n",*j);
}
