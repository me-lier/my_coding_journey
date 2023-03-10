#include<stdio.h>
int main(){
    int a;
    printf("ENTER YOUR RESPECTED YEAR WHETHER IT IS LEAP YEAR OR NOT:- ");
    scanf("%d",&a);
    if(a%4==0){
        printf("Your respected entered year is %d is a LEAP year ",a);
    } else {
        printf("YOUR respected entered year is %d is not a LEAP year",a);
    }
}
