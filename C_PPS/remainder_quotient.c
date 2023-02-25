#include<stdio.h>
int main(){
    int a,b,c,r;
    printf("ENTER THE VALUE OF A:-");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF B:-");
    scanf("%d",&b);
    c=a/b; //quotient
    printf("\nThe quotien value is:- %d",c);
    r=a-c*b; //remainder
    printf("\nThe remainder value is :- %d",r);
}
