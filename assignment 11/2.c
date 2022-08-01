// 2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int hcf(int a,int b);
int main()
{
    int a,b;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);
  int i= hcf(a,b);
    printf("The HCF of %d and %d is %d",a,b,i);
    return 0;
}
int hcf(int a,int b)
{  int i;
      for( i=a>b?b:a;i;i--)
    {
        if(a%i==0&&b%i==0)
        {
        break;
        }
    }
   return i;
}