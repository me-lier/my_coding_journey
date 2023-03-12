#include<stdio.h>
int main()
{
    int a,b,x,c;
    printf("\n ax + b =c to find the 'x' value enter The Value of 'a' and 'b' and 'c' :--> \n ");
    scanf("%d %d %d",&a,&b,&c);
    printf(" \n a,b,c are %d %d %d \n ",a,b,c);
    x=(c-b)/a;
    printf("\n The value of x is when %d *x + %d = %d: \n The value of 'x' is :- %d",a,b,c,x);
}
