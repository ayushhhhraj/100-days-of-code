#include<stdio.h>
void main()
{
int i=10, *j, **k;
j=&i;
k=&j;
printf("%d\n",&i);
printf("%d\n",j);
printf("%d\n",*k);
printf("%d\n",&j);
printf("%d\n",k);
printf("%d\n",&k);
printf("%d\n",i);
printf("%d\n",*j);
printf("%d\n",**k);
}
