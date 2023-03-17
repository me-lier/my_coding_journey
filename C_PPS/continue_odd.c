#include<stdio.h>
int main()
{
    //continue
    for(int i=1; i<=100; i++){
        if(i%2==0){ //odd
            continue; //skip
        }
        printf("\n%d",i);
    }
}
