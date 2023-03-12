#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter temperature in Celsius to get in Farenhiet :-> ");
    scanf("%f",&c);
    f=(1.8*c)+32;
    printf("Entered temperature in celsis is %.0f it is in Farenhoet is :-> %.0f",c,f);
}
