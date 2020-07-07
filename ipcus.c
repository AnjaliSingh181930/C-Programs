//implementing paranthesis checker using stack
#include<stdio.h>
#include<string.h>
#define MAX 10
int top = -1;
int stack[MAX];
void push(char);
char pop();
void main()
{
    char exp[MAX],temp;
     int i, flag=1;
     printf("\n Enter the expression ");
     gets(exp);
     for(i=0; i<=strlen(exp); i++)
     {
         if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
          push(exp[i]);
          else
          {
              temp = pop();
           if(top==-1)
             flag=0;
            if(exp==')'&&(temp=='{'||temp=='['))
            flag==0;
            if(exp=='}'&&(temp=='('||temp=='[')) 
            flag=0;
            if(exp==']'&&(temp=='('||temp=='{')) 
            flag=0;
          }
     }
  if(top>=0)
  flag=0;
  if(flag==1)
  printf("EXPRESSION VALID\n");
  else
  printf("EXPRESSION INVALID\n");
}

void push(char c)
{
    if(top==MAX-1)
        printf("\n STACK OVERFLOW ");
        else
        {
            top=top+1;
            stack[top]=c;
        }
}

char pop()
{    int i;
    /*if(top==-1)
    printf("\n STACK UNDERFLOW ");*/
    i=stack[top--];
    return(i);
}
