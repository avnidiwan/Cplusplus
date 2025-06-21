#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // bool isSorted=true;
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i]>=arr[j])
    //         isSorted=false;
    //         break;
    //     }
    // }
    // cout<<"Is the array sorted? "<<(isSorted==1?"YES":"NO");
    // //tc->(n^2)
    bool isSorted=true;
    for(int i=1; i<n; i++){
        if(arr[i-1]>arr[i]){
            isSorted=false;
        }
    }
    cout<<"Is the array sorted? "<<(isSorted==1?"YES":"NO");
    //tc->O(n)
}