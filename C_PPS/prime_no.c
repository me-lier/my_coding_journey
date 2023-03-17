#include<stdio.h>
int main(){
    int n;
    printf("Enter your number to get wheather it is Prime Number or not:-->");
    scanf("%d",&n);
    int a=0;
    for(int i=2; i<n; i++){
        if(n%i==0){
            a=1;
        break;
        } }
        if(n==1) printf("Entered number is neither Prime nor Composite");
        else if(a==0) printf("Entered Number is Prime");
        else printf("Entered number is Composite");
}
