#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter your Digit:- ");
    scanf("%d",&a);
    b=0;
    for(int i=10; i<=a; b++){
        a=a/i;
    }
    printf("%d",b+1);
}
