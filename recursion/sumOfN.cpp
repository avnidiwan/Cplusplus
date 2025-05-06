#include<bits/stdc++.h>
using namespace std;
//parameter way
int sumfunc1(int i, int sum){
if(i<0){
cout<<sum;
return 0;
}
else{
    sum = sum+ sumfunc1(i-1, sum+i);
}
}
//functional way
int sumfunc2(int n){
   if(n==0)
   return 0;
   return n + sumfunc2(n-1);
}
int main(){
int n; cin>>n;
cout<<sumfunc2(n);
}