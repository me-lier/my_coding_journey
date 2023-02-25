#include <stdio.h>
int main(){
    int p, r, t, si;
    printf("Enter Principal Amount:- ");
    scanf("%d",&p);
    printf("Enter Tenure in months:- ");
    scanf("%d",&r);
    printf("Enter Rate of interest:- ");
    scanf("%d",&t);
    si=p*r*t/100;
    
    printf("Your Simple Interest is :- %d",si);
    return 0;
}
