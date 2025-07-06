#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    //way for taking vector inputs
    vector<int> nums; 
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    vector<int> pos, neg;
    for(int i=0; i<n; i++){
        if(nums[i]<0){
            neg.push_back(nums[i]);
        }
        else{
            pos.push_back(nums[i]);
        }
    }
    vector<int> ans(n,0);
    if(neg.size()>pos.size()){
        for(int i=0; i<pos.size(); i++){
           ans[i*2]=pos[i];
           ans[i*2+1]=neg[i];
        }
        int index=pos.size()*2;
        for(int i=pos.size(); i<neg.size(); i++){
            ans[index]=neg[i];
            index++;
            
        }
    }
    else{ //pos.size()>neg.size()
        for(int i=0; i<neg.size(); i++){
            ans[i*2]=pos[i];
            ans[i*2+1]=neg[i];
        }
        int index=neg.size()*2;
        for(int i=neg.size(); i<pos.size(); i++){
            ans[index]=pos[i];
            index++;
        }

    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    
}