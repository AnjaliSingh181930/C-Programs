//Greatest common divisor
#include<stdio.h>
int GCD(int,int);

int main()
{
    int num1,num2;
    printf("\n Enter two numbers....");
    scanf("%d %d", &num1, &num2);
    printf("\n The gcd of %d and %d is : %d",num1,num2,GCD(num1,num2));
}

int GCD(int x,int y)
{
    int rem;
    rem=x%y;
    if(rem==0)
    return y;
    else
    return GCD(y,rem);
}