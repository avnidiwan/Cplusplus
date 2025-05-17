#include<bits/stdc++.h>
using namespace std;
void reverse(int l, int r,int n,int arr[]){
    if(l>=r) return ;
    else{
        swap(arr[l], arr[r]);
        reverse(l+1, r-1, n, arr);
    }
}
int main(){ 
int n;
cout<<"enter the size of an array: ";
cin>>n;
cout<<endl;
int arr[n];
cout<<"enter the values in array: ";
for(int i=0; i<n; i++){
    cin>>arr[i];
}
// int arr[]={1,2,3,4,5};
reverse(0,n-1,n,arr);
cout<<"reversed array is: ";
for(int i=0; i<n; i++){
    cout<<arr[i]<<endl;
}

}