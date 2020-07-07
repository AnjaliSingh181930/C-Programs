//calculating exponent
#include<stdio.h>
 int expo(int, int);

 void main()
 {
     int num1,num2,res;
     printf("\n Enter the two numbers....");
     scanf("%d %d",&num1,&num2);
     printf("\n The result = %d",expo(num1, num2));
 }

 int expo(int x, int y)
 {
     if(y==0)
         return 1;
     else
         return(x* expo(x,y-1));
 }