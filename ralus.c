/*reverse a list using stack*/
#include<stdio.h>

int stack[10];
int top=-1;
int pop();
void push(int);

void main()
{
    int val,n,i,array[10] ;
    printf("\n Enter the size of array  ");
    scanf("%d",&n);
    printf("\n Enter the array ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
        push(array[i]);
    }
    for(i=0; i<n; i++)
    {
        val=pop();
        array[i]=val;
    }
    printf("\n The reversed array is");
    for(i=0; i<n; i++)
    {
        printf("\n%d",array[i]);
    }
}

void push(int val)
{
 stack[++top]=val;
}
int pop()
{
  return(stack[top--]);
}



