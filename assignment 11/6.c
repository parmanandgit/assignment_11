// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void prime_between_aand_b(int a,int b);
int main(){
    int i,j,a,b;
    printf("Enter the value of a and b (b>a) ");
    scanf("%d%d",&a,&b);
    printf("prime number between a and b are :");
    prime_between_aand_b(a,b);
    return 0;
    }


void prime_between_aand_b(int a,int b)
{  int i,j;
        for(j=a+1;j<b;j++){
    for(i=2;i<j;i++)
    {
     if(j%i==0)
      break;
    }
     if(i==j)
      {
        printf("%d ",i);
      }
    }
}