#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    int hash[256]={0};
    for(int i=0; i<s.length(); i++){
        hash[s[i]]++;
    }

    char ch;
    cin>>ch;
    while(ch--)
    {
        char x;
        cin>>x;
        cout<<hash[x]<<endl;
    }
}