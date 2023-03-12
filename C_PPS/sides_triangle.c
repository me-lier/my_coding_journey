#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter your sides of Triangle :--> ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b){
        printf("The Entered sides of the Triangle is valid");
    } else {
        printf("Entered sides  of a Triangle is Not valid");
    }
}
