// 8. Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
void pascal(int n);
int factorial(int n);
int combi(int n,int r);

void pascal(int n)
{  
    int i,j,k,r;
    for(i=1;i<=n;i++)
    { k=1;
    r=0;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n-i+1&&j<=n+i-1&&k)
            {  printf("%d",combi(i-1,r));
                k=0;
                r++;
            }
            else
            {
             printf(" ");
             k=1;
            }
        }
        
       printf("\n");   
    }
   
}

int factorial(int n)
{
    if(n==0||n==1)
     return 1;
    else
     return n*factorial(n-1);
}

int combi(int n,int r)
{
   return factorial(n)/factorial(r)/factorial(n-r);
}
int main()
{int line;
printf("enter the number of line :");
scanf("%d",&line);
    pascal(line);
}