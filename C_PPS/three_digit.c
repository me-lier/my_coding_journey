#include<stdio.h>
int main(){
    int a;
    printf("Enter your number to get whether it is three digit number or not :-");
    scanf("%d",&a);
    if(a<1000 && a>99){
        printf("It is a three  digit number getted from input:- %d", a);
    } else {
        printf("It is NOT a three  digit number getted from input:- %d", a);
    }
}
