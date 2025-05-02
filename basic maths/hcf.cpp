#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2;
    cin>>n1>>n2;
    vector<int> v;
   for(int i=1; i<n1||i<n2; i++){
    if(n1%i==0 && n2%i==0){
        v.push_back(i);
    }
   }
   sort(v.begin(),v.end());
   for(int i:v){
    cout<<i<<" ";
   }
   cout<<endl;
   cout<<"GCD is: "<<v.back();
    
}