#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number to get whether  it is divisible by 5 OR 3 or not  with 15 :--> ");
    scanf("%d",&a);
    if((a%5==0 || a%3==0) && a%15!=0){
        printf("Entered  number is Divible by 5 OR 3 and  also it is not  divisible by 15:- %d",a);
        } else {
            printf("Entered number condition is not true ");
        }
}
