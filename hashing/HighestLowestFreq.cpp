#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Enter the size of array: ";
    int n;
    cin>>n;
    cout<<"enter the elements of array: ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    map<int, int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    cout<<"Enter the number of queries: ";
    int arr2[n];
    int q;  
    cin>>q;
    while(q--){
        int x; 
        cin>>x; 
        cout<<m[x]<<endl; 
        v.push_back(m[x]);  
    }
    sort(v.begin(), v.end());
    cout<<"highest frequency is: "<<v.back()<<endl;
    cout<<"lowest frequency is: "<<v.front()<<endl;

   
}