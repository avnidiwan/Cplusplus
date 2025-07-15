#include<bits/stdc++.h>
using namespace std;
int main(){

    int row, column;
   
    cin>>row;
    cin>>column;
     int a[row][column];
    for(int i=0;i<row; i++){
        for(int j=0; j<column; j++){
            cin>>a[i][j];
            
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            if(a[i][j]==0){
                for(int k=0; k<row; k++){
                    a[k][j]=0; // Set the entire column to 0
                } 
                for(int k=0; k<column; k++){
                    a[i][k]=0; // Set the entire column to 0
                }   
            }
        }
    }
    for(int i=0;i<row; i++){
        for(int j=0; j<column; j++){
            cout<<a[i][j]<<" ";
        }
    }
}