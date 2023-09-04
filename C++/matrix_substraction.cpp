#include<iostream>
using namespace std;
int main(){
    //Declaring a row and columns of a Matrix...
    int r1,c1,r2,c2;
    //Declaring 1st matrix...
    cin>>r1>>c1;
    int a[r1][c1];
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            // Taking values of matrix values...
            cin>>a[i][j];
        }
    }
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cout<<a[i][j]<<" ";
            // Checking the inputs values...
        }
        cout<<endl;
    }
    cin>>r2>>c2;
    int b[r2][c2];
    //Declaring 2nd matrix values...
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            // Taking values of matrix values...
            cin>>b[i][j];
        }
    }
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cout<<b[i][j]<<" ";
            // Checking the inputs values...
        }
        cout<<endl;
    }
    int ans[r1][c2];
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            
            ans[i][j]=a[i][j]-b[i][j];
            //Substraction.. of matrix.
        }
    }
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<r1 || i<r2 ; i++){
        cout<<"|";
        for(int j=0; j<c1 || j<c2 ; j++){
            
            if(i<r1 && j<c1){
                cout<<" "<<a[i][j]<<" ";
            }
        }cout<<"|"<<"  -  "<<"|";
        for(int j=0; j<c1 || j<c2 ; j++){
            if(i<r2 && j<c2){
                cout<<" "<<b[i][j]<<" ";
            }
        }cout<<"|"<<"  =  "<<"|";
        for(int j=0; j<c1 || j<c2 ; j++){
            if(i<r1 && j<c2){
                cout<<" "<<ans[i][j]<<" ";
            }
        }cout<<"|"<<endl;
    }
    
}
