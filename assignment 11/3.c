// 3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int prime(int n);
int main(){
    int i,n;
    printf("enter a number ");
    scanf("%d",&n);
    i=prime(n);
    if(i)
      printf("the number %d is prime",n);
    else
      printf("the number %d is not prime",n);
}
int prime(int n)
{ int i;
for(i=2;i<n;i++)
    {
     if(n%i==0)
      break;
    }
     if(i==n)
      {
        return i;
      }
    else
    {
     return 0;    
    }
}