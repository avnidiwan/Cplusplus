#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int x; cin>>x; a.push_back(x);
    }
    
//only works well for only positive values
    int count=0;
   int hash[100001]={0};
    for(int i=0; i<n; i++){     
        hash[a[i]]++;
    }for(int i=0; i<n; i++)
    {if(hash[i]!=0){
        count++;
    }}
    cout<<count;


    //better solution
    /*
        if(nums.size()==0) return 0;
    int n=nums.size(), count=0, longest=1, lastsmallest=INT_MIN;
    sort(nums.begin(), nums.end());
    for(int i=0; i<n; i++){
        if(nums[i]-1==lastsmallest){
            count++;
            lastsmallest=nums[i];
        }
        else if(nums[i] !=lastsmallest){
            count=1;
            lastsmallest=nums[i];
        }
        longest=max(count,longest);
    }
    return longest;
    */

    

    //optimal solution
    /*
    int n=nums.size(),  longest=1;
     if(n==0) return 0;
    unordered_set<int> s;
    for(int i=0; i<n; i++){
        s.insert(nums[i]);
    }
    for(auto i:s){
        if(s.find(i - 1)== s.end()){
            int count=1;
            int x=i;
            while(s.find(x+1) != s.end()){
                x++;
                count++;
            }
            longest=max(longest,count);
        }
    }
    return longest;
    }
    */
}