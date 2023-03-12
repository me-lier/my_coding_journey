#include<stdio.h>
int main()
{
    int a;
    printf("Enter your number to get to know it is divisible by 5 & 3 :-  ");
    scanf("%d",&a);
    if(a%5==0 && a%3==0){
        printf("Your entered number is divisible by  5 & 3 :- %d", a);
    } else {
        printf("It is not divisible by 5 & 3 :- %d", a);
    }
}
