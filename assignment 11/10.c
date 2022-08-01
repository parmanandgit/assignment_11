// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
int factorial(int n);
int factorial(int n)
{
    if(n==0||n==1)
     return 1;
    else
     return n*factorial(n-1);
}
int main()
{  int i,sum=0;
   for(i=1;i<=5;i++)
    {
      sum=sum+factorial(i)/i;  //we can also use -->  sum=sum + factorial(i-1);
    }
    printf("sum = %d",sum);
    return 0;
}