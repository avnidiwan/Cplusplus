#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n; i++){
        cin>>a[i];
    }
    int mini=a[0];
    int profit=0;
    for(int i=1; i<n; i++){
        int cost=a[i]-mini;
        profit=max(profit, cost);
        mini=min(a[i],mini);
    }
    cout<<profit;
}