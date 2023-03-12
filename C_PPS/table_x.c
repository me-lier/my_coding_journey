#include<stdio.h>
int main()
{
    int a;
    printf("ENTER YOUR NUMBER TO GET MULTIPLICTAIN TABLE FROM 1 TO 10 :-");
    scanf("%d",&a);
    printf("The following is the table of :- %d",a);
    for(int i=1; 11>i>0; i++){
    printf("\n %d x %d = %d",a,i, i*a);
    }

}
