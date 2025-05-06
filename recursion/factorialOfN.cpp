#include<bits/stdc++.h>
using namespace std;
int fact1(int n, int fact){
    if(n<1){
        cout<<fact;
        return 1;
    }
    else{
        fact=fact*fact1(n-1, fact*n);
}}
int fact2(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact2(n-1);
    }
}
int main(){
int n; cin>>n;
cout<<fact2(n);
}