#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    map<int,int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }

    //iterating over the values of map
    for(auto i:m){
        cout<<i.first<<" -> "<<i.second<<endl;
    }
    int q;
    cin>>q;
    while(q--){
        int x;cin>>x;
        cout<<m[x]<<endl;
    }

}