#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if (n<1) return;  // Base case to stop recursion
    cout << n << endl;
    print(n-1); // Recursive call with reduced value
}

int main(){
    int n; cin >> n;
    if (n >= 1){
        print(n);
    }
    return 0;  // Return success status
}