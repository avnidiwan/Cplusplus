#include<bits/stdc++.h>
using namespace std;
int main(){
/*
    //bruteforce solution
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0;j<n; j++){
            cin>>a[i][j];
        }
    }
    int result[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            result[j][m-i-1]=a[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
*/



//optimal solution
    int row,col;
    cin>>row>>col;
    int a[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
           if(i<j){
            swap(a[i][j], a[j][i]);
           }
        }
        cout<<endl;
    }
    for(int i=0; i<row; i++){
        reverse(a[i], a[i] + col);
    }
    for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        
            cout<<a[i][j]<< " ";
        }
    }
}