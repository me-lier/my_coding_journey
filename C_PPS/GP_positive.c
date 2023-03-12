#include<stdio.h>
int main()
{
    float a,r,n;
    printf("Enter the first element 'a' of G.P:- ");
    scanf("%f",&a);
    printf("Enter the common ratio 'r' of G.P:- ");
    scanf("%f",&r);
    // printf("Enter the no.of terms 'n' of G.P:- ");
    // scanf("%d",&n);
    for(int i=1; a>0; i++){
        printf("%.3f,",a);
        a=a*r;
        
    }
}
