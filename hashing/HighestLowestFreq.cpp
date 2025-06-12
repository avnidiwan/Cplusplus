#include<bits/stdc++.h>
using namespace std;
int main(){
    //vector<int> v;
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
    // for(auto i:m){
    //     cout<<i.first<<" -> "<<i.second<<endl;
    // }
    cout<<"Enter the number of queries: ";
    int q;  
    cin>>q;
    while(q--){
        int x; 
        cin>>x; 
        cout<<m[x]<<endl; 
      //  v.push_back(m[x]);  
    }
    // sort(v.begin(), v.end());
    // cout<<"highest frequency is: "<<v.back()<<endl;
    // cout<<"lowest frequency is: "<<v.front()<<endl;  
    cout<<"Highest frequency is "<<m.begin()->second<<" and is of element "<<m.begin()->first<<endl;
    cout<<"Lowest frequency is "<<m.rbegin()->second<<" and is of element "<<m.rbegin()->first<<endl; 
}