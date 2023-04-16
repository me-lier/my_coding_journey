#include<stdio.h>
int main()
{
    int a,d,n,an;
    // printf("Enter your number of terms");
    // scanf("%d",&n);
    printf("Enter first element");
    scanf("%d",&a);
    printf("Enter difference");
    scanf("%d",&d);
    an=2;
    n=1;
    for(int i=1; (an-1)>0; i++){
        an=a+(i-1)*d;
        printf("%d,",an);
        n=n+1;
    }
    n=n-1;
    printf("\n%d",n);
}
