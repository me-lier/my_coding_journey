#include<stdio.h>
int main()
{
    int a,r,n;
    printf("Enter the first element 'a' of G.P:- ");
    scanf("%d",&a);
    printf("Enter the common ratio 'r' of G.P:- ");
    scanf("%d",&r);
    printf("Enter the no.of terms 'n' of G.P:- ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("%d,",a);
        a=a*r;
        
    }
}
