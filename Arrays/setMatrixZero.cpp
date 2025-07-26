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
                for(int k=0; k<row; k++){
                    if(k==1) continue;
                    else
                    a[i][k]=0; 
                } 
                //aim is to set row zero
                for(int k=0; k<column; k++){
                    if(k==j) continue;
                    else
                    a[k][j]=0;
                }  
                flag=true;
                break; 
            }
        }if(flag==true) break;
    }
    //now only runs for {{1,1,1},{1,0,1},{1,1,1}}
    for(int i=0;i<row; i++){
        for(int j=0; j<column; j++){
            cout<<a[i][j]<<" ";
        }
    }
}