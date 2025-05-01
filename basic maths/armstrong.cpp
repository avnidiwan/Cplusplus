#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=n;
    int ans=0;
    int count=log10(n)+1;
    int lstd=0;
    while(n>0){
        lstd=n%10;
        n=n/10;
        ans=ans+(pow(lstd,count));
    }
    if(num==ans){
        cout<<"is armstrong number";
    }
    else{
        cout<<"is not the armstrong number";
    }
}