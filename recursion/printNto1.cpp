#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if (n<1) return;  // Base case to stop recursion
    cout << n << endl;
    print(n-1); // Recursive call with reduced value
}
void print(int n , int i){
    if(n<i){
        return;
    }
    cout<<n<<endl;
    print(n-1,i);
}

int main(){
    int n; cin >> n;
    print(n,1);
}