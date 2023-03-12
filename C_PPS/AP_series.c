#include<stdio.h>
int main()
{
    int a,n,d,an;
    printf("Enter the first element 'a' of A.P:- ");
    scanf("%d",&a);
    printf("Enter the common difference 'd' of A.P:- ");
    scanf("%d",&d);
    printf("Enter the no.of terms 'n' of A.P:- ");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++ ){
            an=a+(i-1)*d;
        printf("%d,",an);
    }
}
