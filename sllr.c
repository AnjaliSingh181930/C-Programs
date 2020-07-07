/*Stack Linked List Representation*/
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<malloc.h>

struct stack
{
    int data;
    struct stack *next;
}*top=NULL;

struct stack *push(struct stack *, int val);
struct stack *pop(struct stack *);
struct stack *display(struct stack *);
int peek(struct stack *);

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
                    top=push(top,val);
                     break;
                    case 2: top=pop(top);
                     break;
                     case 3: val=peek(top);
                     if(val!=-1)
                     printf("\n The top most element of the stack is: %d",val);
                     else
                     printf("\n The stack is empty ");
                     break;
                     case 4: top=display(top);
                     break;
                     
         }  
         printf("\nDo you want to make another choice?(y/n)  \n");
       choice=getch();
     }while(choice!='n');
     getch();
}

struct stack *push(struct stack *top, int val)
{     struct stack *new_node;
     new_node=(struct stack*)malloc(sizeof(struct stack));
        new_node->data=val;
    if(top==NULL)
        new_node->next=NULL;
    else
        new_node->next=top;
        top=new_node;
        top=display(top);
        return top;
}

struct stack *pop(struct stack *top)
{   
    struct stack *ptr;
    if(top==NULL)
    printf("\n STACK UNDERFLOW");
    else
    {
        ptr=top;
    top=top->next;
    free(ptr);
    }
    top=display(top);
    return top;
}

int peek(struct stack *top)
{   
    if(top==NULL)
    {
    printf("\n STACK UNDERFLOW");
    return -1;
}
    else
    return top->data;
    top=display(top);
}

struct stack*display(struct stack *top)
{
    struct stack *ptr;
    ptr=top;
    if(top==NULL)
    printf("\n STACK UNDERFLOW");
        while(ptr!=NULL)
    {
        printf("\n %d",ptr->data);
        ptr=ptr->next;
    }
    return top;
}  