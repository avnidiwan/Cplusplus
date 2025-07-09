 #include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n; i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    int start=0, end=n-1;
        int idx=-1;
        while(start<=end)
       { int mid=(start+end)/2;
        if(target==nums[mid]){
        idx=mid;
        break;}
        else if(target>nums[mid]){
            start=mid+1;
        }
        else if(target<nums[mid]){
            end=mid-1;
        }}
        cout<<idx;
    }