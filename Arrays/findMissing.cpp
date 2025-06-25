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
    }bool anyMissing=0;

   for (int check = 0; check <= maxVal; ++check) {
        bool found = false;
        for (int i = 0; i < n; ++i) {
            if (a[i] == check) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << check << " ";
            anyMissing = true;
        }
    }

    if (!anyMissing) {
        cout << "None (all numbers from 0 to " << maxVal << " are present)";
    }

    cout << endl;
    return 0;
}

