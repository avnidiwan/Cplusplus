#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if (n <= 0) return;  // Base case to stop recursion
    cout << "avni diwan" << endl;
    print(n - 1); // Recursive call with reduced value
}

int main(){
    int n; cin >> n;
    if (n > 0){
        print(n);
    }
    return 0;  // Return success status
}