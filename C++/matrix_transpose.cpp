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
    int ans[c1][r1];
    for(int i=0; i<c1; i++){
        for(int j=0; j<r1; j++){
            
            ans[i][j]=a[j][i];
            //Transpose of matrix....
        }
    }
    cout<<endl;
    for(int i=0; i<c1; i++){
        for(int j=0; j<r1; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
