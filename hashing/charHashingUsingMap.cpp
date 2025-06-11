#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char, int> m;
    for(int i=0; i<s.length(); i++){
        m[s[i]]++;
    }
    int ch;
    cin>>ch;
    while(ch--){
        char x; cin>>x;
        cout<<m[x]<<endl;
    }
}