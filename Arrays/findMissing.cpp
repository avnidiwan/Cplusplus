#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int maxVal = a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i] > maxVal)
            maxVal = a[i];
    }
int num=0;
   for (int i = 0; i <= maxVal; i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (a[j] == num) {
                num++;
                found = true;
                break;
            }
        }
        if (found==false) {
            cout << num << " ";
            num++;
            
        }
    }

    
    return 0;
}

