#include<stdio.h>
void demo(int);
void main()
{
int a=30;
demo(a);
printf("a is %d\n",a);
}
void demo(int b)
{
b=60;
printf("b is %d\n",b);
}
