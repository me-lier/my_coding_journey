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
    
    const int N=1e5 + 10;
    vector<int> freq(N,0);
    for(int i=0; i<N; i++){
        freq[v[i]]++;
    }
    int q;
    cin>>q;
    while(q>0){
        int ele;
        cin>>ele;
        cout<<freq[ele];
        q--;
    }
}
