#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int idx=0;
    int findsum;
    int num=0;
    cin>>findsum;
    int sum=0;
    for(int i=0; i<n; i++){
        if(sum<findsum){
        sum+=a[i];
        }
        else if(sum==findsum){
            while(sum>0){
                sum-=a[i-1];
                num=num*10+a[i];   
                i--;
            }
            cout<<num;
        }
        else{
            sum-=a[idx];
            idx++;
        }
    }
}