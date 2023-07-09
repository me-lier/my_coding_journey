#include<iostream>
#include<vector>
using namespace std;
bool prefix_suffix(vector<int> &v){
    int total=0;
    int s;
    for(int i=1; i<v.size(); i++){
        v[i]+=v[i-1];
    }
    for(int i=0; i<v.size(); i++){
        total+=v[i];
    }
    for(int i=0; i<v.size(); i++){
        s=total-v[i];
        if(s==v[i]){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &ele:v){
        cin>>ele;
    }
    for(int ele:v){
        cout<<ele;
    }
    cout<<endl;
    cout<<prefix_suffix(v)<<endl;
    for(int ele:v){
        cout<<ele<<",";
    }
}
