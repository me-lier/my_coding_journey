// sum of 1 entry num 321 
#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    printf("ENTER 3 DIGIT CODE TO SUM OF THERE NUMBERS:- ");
    scanf("%d", &a);
    printf("\n YOUR ENTERED 3 DIGIT CODE IS :- %d",a);
    b=a/100;
    c=a-b*100;
    d=c/10;
    e=c-d*10;
    f=(b+d+e);
    printf("\n SUM OF THERE INDIVIDUALS OF EACH NUMBERS YOU ENTERED :- %d",b+d+e);
    return 0;
}
