// 9. Write a program in C to find the square of any number using the function.
#include<stdio.h>
float squ(float n);
float squ(float n)
{   
    return n*n;

}
int main(){
    float square=0,n;
    printf("enter a number ");
    scanf("%f",&n);
    square=squ(n);
    printf("the square of %f is %f",n,square);
    return 0;
}