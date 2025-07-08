#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int x; cin>>x; a.push_back(x);
    }
    // sort(a.begin(), a.end());
    // int j=0, count=1;
    // for(int i=0; i<n-2; ){
    //     if(a[i]+1==a[i+1]){
    //     j=i;
    //     count++;
    //     i++;
    //     }
    //     else{
    //         i++;
    //     }
    // }
    // cout<<count;

    int count=0;
    
   int hash[100001]={0};
    for(int i=0; i<n; i++){     
        hash[a[i]]++;
    }for(int i=0; i<n; i++)
    {if(hash[i]!=0){
        count++;
    }}
    cout<<count;
}