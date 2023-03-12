#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the AGE of Person 1 :-->");
    scanf("%d", &a);
    printf("Enter the AGE of Person 2 :-->");
    scanf("%d", &b);
    printf("Enter the AGE of Person 3 :-->");
    scanf("%d", &c);
    if(a>c && b>c){
    printf("Person 3 is the youngest among all :- %d",c);
    } if(a>b && c>b){
    printf("Person 2 is the youngest among all :- %d",b);
    } if(b>a && c>a){
    printf("Person 1 is the youngest among all :- %d",a);
    }
}
