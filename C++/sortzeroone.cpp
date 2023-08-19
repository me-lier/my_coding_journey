#include<iostream>
#include<vector>
using namespace std;
void sortzeroesones(vector<int> &v){
    int n=v.size();
    int l=0;
    int r=n-1;
    while(l<r){
        if(v[l]==1 && v[r]==0){
            swap(v[l],v[r]);
            l++;
            r--;
        } else if(v[l]==1 && v[r]==1){
            r--;
        } else if(v[l]==0 && v[r]==0){
            l++;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<",";
    } cout<<endl;
    sortzeroesones(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<",";
    }
}
