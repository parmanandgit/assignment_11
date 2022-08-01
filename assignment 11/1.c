// 1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int lcm(int a,int b);
int main()
{
    int a,b,c;
    printf("enter two number ");
    scanf("%d%d",&a,&b);
    c=lcm(a,b);
    printf("lcm of %d and %d is %d",a,b,c);
    return 0;
}
int lcm(int a,int b)
{ int c;
 c=a>b?a:b;
  while (1)
  {
    if((c%a==0) && (c%b==0))
    break;
    c++;
  }
return c;
}