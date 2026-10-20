#include<stdio.h>
int demo(int);
void main()
{
int a=30;
int d = demo(a);
printf("a=%d\n",a);
printf("d = %d\n",d);
}
int demo(int b)
{
printf("b=%d\n",b);
b=60;
printf("b=%d\n",b);
return b;
}