#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     int count=0;
     int num=n;
     int ans=0;
     while(num>0){
        int lstd=num%10;
        ans= (ans*10)+lstd;
        num/=10;
        count++;
     }
     if(ans==n){
        cout<<"true";
     }
     else cout<<"false";

}