#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>m>>n;
    for(int i=1; i<=n; i++){
        if(i==1 || i==n){
            for(int j=1; j<=m; j++){
                cout<<"*";
            }
            cout<<endl;
        }else if(1<i<n){
            for(int j=1; j<=m; j++){
                if(j==1 || j==m){
                    cout<<"*";
                } else {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
}
