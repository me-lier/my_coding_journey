#include<stdio.h>
int main()
{
    int a,b,area,p;
    printf("Enter the value of length and breadth :-\n");
    scanf("%d %d", &a, &b);
    area=a*b;
    p=2*(a+b);
    if(area>p){
        printf("Area of the rectangle is %d , greater than Perimeter of the rectangle %d:- ",area,p);
    } if(area<p){
        printf("Area of the rectangle is %d , lesser than Perimeter of the rectangle %d:- ",area,p);
    } if(area==p){
        printf("Area of the rectangle is %d , equal to the Perimeter of the rectangle %d:- ",area,p);
    } 
}
