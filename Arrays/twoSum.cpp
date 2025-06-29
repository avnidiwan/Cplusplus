#include<bits/stdc++.h>
using namespace std;
int main(){
    //#1 bruteforse solution using loops
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
       cin>>a[i];
    }
    int target;
    cin>>target;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]+a[j]==target){
                cout<<"indices "<<i<<" "<<j;
            }
        }
    }}


    //#2 better solution using hashmap
class Solution{
    public:
     vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int> m;
       int n=nums.size();
       for(int i=0; i<n; i++){
        int num1=nums[i];
        int num2=target-num1;
        if(m.find(num2)!=m.end())
        return {m[num2],i};
        m[num1]=i;
       }
       return {-1,-1};
    }
};