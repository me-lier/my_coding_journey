#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter three digit code to get which is greater of them to know:- ");
    scanf("%d",&a);
    b=a/100;
    c=(a-b*100)/10;
    d=a-b*100-c*10;
    if(b>c && b>d){
        printf("\nGretest number is :- %d", b);
    } if(c>b && c>d){
        printf("\nGretest number is :- %d", c);
    } if(d>c && d>b){
        printf("\nGretest number is :- %d", d);
    } else if(a=b=c){
        printf("\nEntered number all are same");
    } else if(a==b || a==c){
        printf("\nBoth numbers are same");
    }
}
