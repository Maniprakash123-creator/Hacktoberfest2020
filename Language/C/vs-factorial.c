#include<stdio.h>
int main()
{
    int n,fact=1;
    scanf("%d",&n);
    while(n!=0)
    {
        fact*=n;
        n--;
    }
    printf("Factorial of the given number = %d",fact);
}