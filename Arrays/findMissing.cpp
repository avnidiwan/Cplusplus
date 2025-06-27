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


    //bruteforce approach
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
    }//tc-> O(n*2)

    


    // better approach using hashing
    int hash[maxVal+1]={0};
    for(int i=0; i<n; i++){
        hash[a[i]]=1;
    }
    for(int i=0; i<maxVal+1; i++){
        if(hash[i]==0){
            cout<<i<<" ";
        }else continue;
    }
    //tc-> O(2n)
    return 0;
}

