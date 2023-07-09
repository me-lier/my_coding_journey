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
        cout<<v[i];
    }
    const int N=1e5 + 10;
    vector<int> a(N,0);
    for(int i=0; i<n; i++){
        a[v[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int i;
        cin>>i;
        cout<<a[i]<<endl;
    }
    
}
