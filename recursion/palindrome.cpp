#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   int p;
   cin>>s;
   int l=s.length();
//    int a[l];
//    a[0]=s[0];
   for(int i=0, j=l-1; i<j; i++,j--){
    if(s[i]==s[j]){
        p=1;
    }
    else if(s[i]!=s[j]){
        p=0;
        break;
    }
   }
   if(p==1){
    cout<<"is palindrome";
   }
   else if(p==0){
    cout<<"not palindrome";
}
}