#include<stdio.h>
int main()
{
    int a;
    printf("Enter your respected number to get absolute value :- ");
    scanf("%d", &a);
    if(a>=0){
        printf("The absolute value is :-> %d",a);
    } else {
        printf("The absolute value is :-> %d",-1*a);
    }
}
