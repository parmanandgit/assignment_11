// 7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void fibo(int n);
int main()
{   int N;
    printf("enter the value of N ");
    scanf("%d",&N);
    printf("first N terms of Fibonacci series : ");
    fibo(N);
 return 0;
}
void fibo(int N)
{ int a=-1,b=1,c;
    for(int i=0;i<N;i++)
    {
     c=a+b;
     printf("%d ",c);
     a=b;
     b=c;
    } 
}