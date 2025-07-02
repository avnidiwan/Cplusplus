#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    //#1 brute force solution
    int num;
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j])
            count++;
        }
        if(count>(n/2)){
             num= arr[i];
        }
    }
    cout<<num;



    //#2 Better solution using hashing
    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    for(auto i:m){
        if(i.second>n/2){
            num=i.first;
        }
    }
    cout<<num;



    //#3 Moor's Voting algorithm
    int cnt=0;
    int el;
    for(int i=0; i<n; i++){
        if(cnt==0){
            cnt=1;
            el=arr[i];
        }
        else if(arr[i]==el)
        cnt++;
        else cnt--;
        }
    int countel=0;
    for(int i=0; i<n; i++){
        if(arr[i]==el)
        countel++;
    }
    if(countel>n/2)
    cout<<el;
}
