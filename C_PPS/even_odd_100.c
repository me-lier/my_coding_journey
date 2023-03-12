#include<stdio.h>
int main()
{
    //even
    for(int i=1; i<=100; i++){
        if(i%2==0){
            printf("\n%d",i);
        }
    }
    //odd
    for(int i=1; i<=100; i++){
        if(i%2!=0){
            printf("\n%d",i);
        }
    }
}
