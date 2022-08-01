// 5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
int next_prime(int n);
void first_n_prime(int N);
int main()
{
    int N,k=1,j;
    printf("enter the value of N ");
    scanf("%d",&N);
    printf("first %d prime number is : ",N);
    first_n_prime(N);

}
void first_n_prime(int N)
{  int j,k=1;
      for(int i=0;i<N;i++)
    {
     j=next_prime(k);
     printf("%d ",j);
     k=j;
    }

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