#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the size of array: ";
    int n;
    cin>>n;
    cout<<"enter the elemcts of array: ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    map<int, int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    cout<<"Enter the number of queries: ";
    int q;  
    cin>>q;
    while(q--){
        int x; cin>> x;
        cout<<m[x]<<endl;
    }
}