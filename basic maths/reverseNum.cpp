#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int result=0;
    while(n>0){
        int lastd=n%10;
        result=(result*10)+lastd;
       // cout<<lastd;
        n=n/10;
    }
    cout<<result;
}
int main(){
    reverse(10040000);
}