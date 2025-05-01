#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int isprime=1;
    for(int i=2; i<=n/2; i++){
        if(n%i == 0){
            isprime=0;
            break;
        }
    }
    if(isprime == 1){
        cout<<"is prime";}
    else if(isprime==0){
        cout<<"not prime";       
    }
}