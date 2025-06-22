#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int d;cin>>d;
    if(d>n){
        d=d%n;
    }

   // #1
    while(d--)
    {
    int temp=a[0];
    for(int i=0; i<n;){
        if(i!=n-1){
        a[i]=a[i+1];
        i++;
        }
        else{
            a[i]=temp;
            i++;
        }
    }
}
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    //time complexity-> O(d*n)



    //#2 optimal solution
    //time complexity-> O(2n)
    //space coplexity-> O(1)
    reverse(a,a+d);
    reverse(a+d,a+n);
    reverse(a,a+n);
    for(int i=0; i<n; i++){
         cout<<a[i]<<" ";
     }
}