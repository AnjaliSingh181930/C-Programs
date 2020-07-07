#include<stdio.h>
int fibonacci(int);

int main()
{
    int n,i,res;
    printf("\n Enter the number of terms..");
    scanf("%d",&n);
    printf("\n Fibonacci series..");
    for(i=0; i<n ;i++)
    {
        res=fibonacci(i);
        printf("%d\t",res);
    }
    return 0;
}

int fibonacci(int n)
{
    if(n == 0)
    return 0;
    else if(n == 1)
    return 1;
    else
    return( fibonacci(n-1) + fibonacci(n-2) );
} 