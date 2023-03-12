#include<stdio.h>
int main()
{
    int a,b,c,d,t;
    printf("ENTER THREE DIGITS TO GET SUM OF THERE EACH INDIVIDUALS :-  ");
    scanf("%d",&a);
    b=a/100; //first
    t=a%100; //temp
    c=t/10; //middle
    d=t%10; //last
    printf("The sum of there INDIVIDUALS is :--> %d",(b+c+d));
}
