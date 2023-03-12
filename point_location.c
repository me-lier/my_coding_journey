#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the points to get to know Where the points located :- \n");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("This Points are lies in ORIGIN :- (%d,%d)",x,y);
    } else if(x==0){
        printf("This Points are lies in Y-AXIS :- (%d,%d)",x,y);
    } else if(y==0){
        printf("This Points are lies in X-AXIS :- (%d,%d)",x,y);
    } else {
        printf("This Points are lies in BOTH The QUADRANT - X-AXIS and Y-AXIS :- (%d,%d)",x,y);
    }
}
