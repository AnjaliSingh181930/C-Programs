/*Stack array representation*/
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

#define MAX 3

int st[MAX], top=-1;
void push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);

void main()
{   int val,choice,option;
     do
     {
         printf("\nYour choices are:-");
         printf("\n1.PUSH");
         printf("\n2.POP");
         printf("\n3.PEEK");    
         printf("\n4.DISPLAY");
         printf("\n5.EXIT");
         printf("\nEnter your choice:- ");
         scanf("%d",&option);
         switch(option)
         {
                    case 1: printf("\n Enter value to be entered:");
                    scanf("%d",&val);
                    push(st,val);
                     break;
                    case 2: val=pop(st);
                    if(val!=-1)
                    printf("\n The value deleted from stack is: %d",val);
                     break;
                     case 3: val=peek(st);
                     if(val!=-1)
                     printf("\n The top most element of the stack is: %d",val);
                     break;
                     case 4: display(st);
                     break;
                     
         }  
         printf("\nDo you want to make another choice?(y/n)  \n");
       choice=getch();
     }while(choice!='n');
}

void push(int st[], int val)
{
    if(top==MAX)
        printf("\n The stack is full,i.e.,Stack Overflow ");
    
    else
    {
        top++;
        st[top]=val;
    }

}

int pop(int st[] )
{
    int val;
    if(top == -1)
    {
        printf("\n The stack is empty,i.e.,Stack Underflow ");
        return -1;
    }
    else
    {
        val=st[top];
        top--;
        return val;
    }
}

int peek(int st[])
{
    if(top == -1)
   {
         printf("\n The stack is empty,i.e.,Stack Underflow ");
        return -1;
   }
   else
       return st[top];
}

void display(int st[])
{
    int i=top;
    if(top == -1)
    printf("\n The stack is empty,i.e.,Stack Underflow ");
    while(i!=-1)
    {
        printf("\n %d",st[i]);
        i--;
    }
}
