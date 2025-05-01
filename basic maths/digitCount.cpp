#include<bits/stdc++.h>
using namespace std;
int countDigit(int n){
    int count=0;
    while(n>0){
        n/=10;  
        count++;
    }
    cout<<count;
}
int count(int n){
    
}
int main(){
    countDigit(17);
}