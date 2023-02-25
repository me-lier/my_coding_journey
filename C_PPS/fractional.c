#include<stdio.h>
int main(){
    float x;
    printf("Enter the value of fractional number to get after point number :-");
    scanf("%f",&x);
    int y=x;
    x=x-y;
    printf("The Value of point is:- %f",x);
    
}
