#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cin>>r1>>c1;
    int a[r1][c1];
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cin>>r2>>c2;
    int b[r2][c2];
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cin>>b[i][j];
        }
    }
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    int ans[r1][c2];
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            int value=0;
            for(int k=0; k<c1; k++){
                value+=a[i][k]*b[k][j];
            }
            ans[i][j]=value;
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
        }cout<<"|"<<"  *  "<<"|";
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
