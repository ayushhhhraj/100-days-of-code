#include <stdio.h>
int main(){
    int n, a = 1, i, j, c;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i = 2; i <= n && a <= 20; i++)
    {
    c = 1;
    for(j = 2; j < i; j++)
    {if(i % j == 0)
    {c = 0;
    break;}}
    if(c == 1)
    {
    printf("%d prime number is %d\n", a, i);
    a++;
    }
    }
return 0;
}