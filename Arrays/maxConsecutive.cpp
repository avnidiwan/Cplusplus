#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    //sort(a, a+n);
    int j=1, count=0, maxC=0;
    for(int i=0; j<n; ){
        if(a[i]==a[j]){
            count++;
            if(count>maxC){
            maxC=count;}
            j++;
        }
        else if(a[i]!=a[j]){
            count=0;
            i=j;
            j++;
        }
    }
    cout<<maxC+1;
    //T.C.->O(n log n) ; due to sorting
}