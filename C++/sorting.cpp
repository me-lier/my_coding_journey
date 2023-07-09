#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<",";
    }
    cout<<endl;
    int a[n];
      int j=0;
    for(int i=0; i<n; i++){
        if(v[i]==0){
            a[j]=v[i];
            j++;
        }
    }
  
    for(int i=0; i<n; i++){
        if(v[i]!=0){
            a[j]=v[i];
            j++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<",";
    }
}
