#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        a.push_back(x);
    }

    //#1 brute force solution
    for(int i=0; i<n; i++){
        bool leader=true;
        for(int j=i+1; j<n; j++){
            if(a[i]<a[j]){
            leader=false;
            break;}
    }
    if(leader==true) cout<<a[i]<<" ";
    }



    //#2 optimal solution
    vector<int> ans;
    int max=INT_MIN;
    for(int i=n-1; i>=0; i--){
        if(a[i]>max){
            max=a[i];
            ans.push_back(max);
        }
    }
    for(int i:ans){
        cout<<i<<" ";
    }
}