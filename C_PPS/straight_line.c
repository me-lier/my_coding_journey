#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,m1,m2;
    printf("\nEnter your points to verify it is in straight line or not:-");
    printf("\n ENTER YOUR POINTS-1 (X1,Y1) :--> ");
    scanf("%d %d",&x1,&y1);
    printf("POINTS-1--> (%d,%d)", x1,y1);
    printf("\n ENTER YOUR POINTS-2 (X2,Y2) :--> ");
    scanf("%d %d",&x2,&y2);
    printf("POINTS-2--> (%d,%d)", x2,y2);
    printf("\n ENTER YOUR POINTS-3 (X3,Y3) :--> ");
    scanf("%d %d",&x3,&y3);
    printf("POINTS-2--> (%d,%d)", x3,y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    if(m1==m2){
        printf("\n ENTERED POINTS ARE IN A STRAIGHT LINE");
    } else {
        printf("\n Entered points are Not in a straight line ");
    }

}
