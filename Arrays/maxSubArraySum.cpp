#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    //#1
    int max=INT_MIN;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=a[i];
        if(sum>max)
        max=sum;
        if(sum<0)
        sum=0;
    }
    cout<<max;


    //#2
    int max=INT_MIN;
    int sum=0;
    int ansStart=-1, ansEnd=-1;
    int Start;
    for(int i=0; i<n; i++){
        if(sum==0)  Start=i;
        sum+=a[i];
        if(sum>max){
        max=sum;
        ansStart=Start; ansEnd=i;
        }  
        if(sum<0)
        sum=0;
    }
    cout<<max;
}