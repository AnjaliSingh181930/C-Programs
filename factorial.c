#include<stdio.h>

int fact(int);
void main()
{
    int n;
    printf("\n Enter the number whose factorial is to be calculated...");
    scanf("%d",&n);
    printf("\n The factorial of %d is as follows...%d",n,fact(n));
}

int fact (int x)
{
    if(x==1)
    return 1;
    else
    return (x* fact(x-1));
}