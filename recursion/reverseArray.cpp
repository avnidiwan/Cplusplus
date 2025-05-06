#include<bits/stdc++.h>
using namespace std;
int reverse(int l, int r, int n,int arr[]){
if(l>=r) return 0;
else{
    swap(arr[l], arr[r]);
    cout<<reverse(l+1,r-1, n, arr);
}
// cout<<"reversed array is: ";
// for(int i=0; i<n; i++){
// cout<<arr[i]<<endl;
// }
}
int main(){ 
int n;
cout<<"enter the size of an array: ";
cin>>n;
int arr[n];
cout<<endl;
cout<<"enter the values in array: ";
for(int i=0; i<n; i++){
    cin>>arr[i];
}
reverse(0,n-1, n, arr);
}