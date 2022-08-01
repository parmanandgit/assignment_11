// 4. Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int next_prime(int n);
int main()
{
    int i,n;
    printf("enter a number ");
    scanf("%d",&n);
    i=next_prime(n);
    printf("next prime number after %d is %d ",n,i);
    return 0;

}
int next_prime(int n)
{ int i;
while(n)
{n++;
for(i=2;i<n;i++)
    {
     if(n%i==0)
      break;
    }
    if(i==n)
    break;
}
return n;

}

