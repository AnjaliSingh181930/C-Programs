//Evaluation of postfix expression
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>

#define max 100
float st[max];
int top=-1;
void push(float st[], float val);
float pop(float st[]);
float evaluatepostfixexpression(char exp[]);

void main()
{
    float val;
    char exp[100];
    printf("\n Enter any postfix expression....");
    gets(exp);
    val= evaluatepostfixexpression(exp);
    printf("\n The value of the postfix expression is %.2f",val);
}

float evaluatepostfixexpression(char exp[])
{
    int i;
    float op1, op2, value;
    while(exp[i]!='\0')
    {
        if(isdigit(exp[i]))
        push( st, exp[i]);
        else
        {
            op1=pop(st);
            op2=pop(st);
            switch(exp[i])
            {
                case '+' :
                value=op1 +op2;
                break;
                case '-' :
                value=op1 -op2;
                break;
                case '*' :
                value=op1 *op2;
                break;
                case '/' :
                value=op1 /op2;
                break;
                case '%' :
                value=(int)op1 % (int)op2;
                break;
            }
            push(st,value);
        }
        i++;
    }
    return(pop(st));
}

void push(float st[], float val)
{
    if(top==max-1)
    {
printf("\n STACK OVERFLOW");
    }
    else
    {
        top++;
        st[top]=val;
    }
}

float pop(float st[])
{
    float val=-1;
    if(top==-1)
    printf("\n STACL UNDERFLOW");
    else
    {
        val=st[top];
        top--;
    }
    return val;
}