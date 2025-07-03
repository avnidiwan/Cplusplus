#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

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
