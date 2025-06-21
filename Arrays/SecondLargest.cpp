#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
//     int max=arr[0];
//     for(int i=0; i<n; i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     int SecMax=-1;
//     for(int i=0; i<n; i++){
//         if(arr[i]>SecMax && arr[i]!=max){
//             SecMax=arr[i];
//         }
//     }
//      cout<<"Second largest element: "<<max<<endl;
//     cout<<"Second largest element: "<<SecMax<<endl;
// //tc=O(2n)
int largest=arr[0], slargest=-1;
for(int i=1; i<n; i++){
    if(arr[i]>largest){
        slargest=largest;
        largest=arr[i];
    }
}
cout<<"LARGEST: "<<largest<<" "<<"SECOND LARGEST: "<<slargest;
//tc->O(n)
}