#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int temp=a[0];
    for(int i=0; i<n;){
        if(i!=n-1){
        a[i]=a[i+1];
        i++;
        }
        else{
            a[i]=temp;
            i++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    //time complexity-> O(n)
    //space complexity-> O(n) because im making modifications in the original array
}