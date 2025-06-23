#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    int a1[m];
    for(int i=0; i<m; i++){
        cin>>a1[i];
    }
    int n;
    cin>>n;
    int a2[n];
    for(int i=0; i<n; i++){
        cin>>a2[i];
    }
    set<int>s;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(a1[i]==a2[j])
            s.insert(a2[j]);
    }
    }
    for(auto i:s){
        cout<<i<<" ";
    }
}