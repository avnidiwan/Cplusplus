#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
cin >> n;
int a[n];
for (int i = 0; i < n; i++) {
    cin >> a[i];
}


//#1
int index = 0;
int countzero = 0;

for (int i = 0; i < n; i++) {
    if (a[i] != 0) {
        a[index++] = a[i];
    } else {
        countzero++;
    }
}

for (int i = index; i < n; i++) {
    a[i] = 0;
}

cout << countzero << endl;
for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
}
  //tc-> O(n), SC-> O(1)  
  
  


  //#2 using swapping
  int j=-1;
  for(int i=0; i<n; i++){
    if(a[i]==0){
      j=i;
      break;
    }
  }
  for(int i=j+1;i<n;i++){
    if(a[i]!=0){
        swap(a[i],a[j]);
        j++;
    }
  }
  for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
  }
}