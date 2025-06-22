#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    //#1 using manual sorting and comparing to remove duplicates
    // time complexity: O(n logn)
    sort(a,a+n);
    for(int i=1; i<n;){
        if(a[i-1]!=a[i]){
            cout<<a[i-1]<<" ";
            i++;
        } else {
            i++;
        }
    }
     cout<<a[n-1]<<" ";


     //#2 using set , gives sorted output
    // time complexity: O(n logn)
    set<int>s;
    for(int i=0; i<n; i++){
        s.insert(a[i]);
    }
    for(auto i:s){
        cout<<i<<" ";
    }


    //#3 using unordered_set, gives unsorted output
    // time complexity: O(n)
     unordered_set<int>s;
    for(int i=0; i<n; i++){
        s.insert(a[i]);
    }
    for(auto i:s){
        cout<<i<<" ";
    }


    //#4 2pointer approach for optimal solution
    //tc : O(n)
    //sc : O(1)
    int i=0;
    for(int j=1; j<n; j++){
        if(a[i]!=a[j]){
            a[i+1]=a[j];
            i++;
        }
    }
    return i+1; // returns the new size of the array without duplicates
}