#include<stdio.h>
int main()
{
    int profit, loss, sell, cost;
    printf("Enter the cost of original price of an item :- ");
    scanf("%d", &cost);
    printf("Enter the cost of selling price of an item :- ");
    scanf("%d", &sell);
    
    profit=sell-cost;
    loss=cost-sell;
    if(profit>0){
        printf("There is an profit occurs of %d", profit );
    } 
    if(loss>0){
        printf("There is a loss occurs of %d ", loss);
    } else {
        printf("NO LOSS OCCURS NOR PROFIT OCCURS");
    }
}
