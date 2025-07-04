#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    //#1 way for taking vector inputs
    vector<int> nums; 
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    //#2 way for taking vector input
    // vector<int> nums[n];
    // for(int i=0;i<n ;i++){
    //     cin>>nums[i];
    // }


    vector<int> neg, pos;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]<0)
            neg.push_back(nums[i]);
        else if(nums[i]>=0){
            pos.push_back(nums[i]);
        }
    }



    //#1 way of bruteforce solution
    int p=0,ne=0; vector<int>result;
    for(int i=0; i<nums.size(); i++){
        if(i%2==0 && p<pos.size()){
            result.push_back(pos[p]); p++;
        }
         if(i%2!=0 && ne<neg.size()){
            result.push_back(neg[ne]); ne++;
        }
    }
    


    //#2 way of brute force solution
    for(int i=0; i<pos.size()||i<neg.size(); i++){
        nums[2*i]=pos[i];
        nums[2*i+1]=neg[i];
    }
    for(auto i:nums){
        cout<<i<<" ";
    }

    
}