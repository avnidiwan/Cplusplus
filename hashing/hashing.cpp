#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter the size of array: ";
    int n;
    cin>>n;
    cout<<"enter the elements of array: ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int hash[100001]={0};
    for(int i=0; i<n; i++){     
        hash[arr[i]]++;
    }
    cout<<"enter the number of queries: ";
    int q;
    cin>>q;
    cout<<"enter the queries: ";
    while(q--){
        int x;
        cin>>x;
        cout<<hash[x]<<endl;
    }
    
}