//WORKS WHEN THERE IS ONLY ONE ZERO IN THE MATRIX
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
    bool flag=false;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            if(a[i][j]==0){
                for(int k=0; k<column; k++){
                   
                    a[i][k]=0; 
                } 
                //aim is to set row zero
                for(int k=0; k<row; k++){
                   
                    a[k][j]=0;
                }  
                flag=true;
                break; 
            }
        }if(flag==true) break;
    }

    for(int i=0;i<row; i++){
        for(int j=0; j<column; j++){
            cout<<a[i][j]<<" ";
        }
    }
}