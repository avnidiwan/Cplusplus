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


     vector<pair<int, int>> ZeroPosition;

    for(int i=0; i<row; i++){
        for(int j=0; j<column;j++ ){
            if(a[i][j]==0){
                ZeroPosition.push_back({i, j});  
            }       
        }
    }
    cout<<"Zeros are found at locations: "<<endl;
    for(auto i:ZeroPosition){
        cout<<i.first<<" "<<i.second<<endl;
    }


    for(auto i:ZeroPosition){
        int x = i.first; // row index
        int y = i.second; // column index

        // Set the entire row to zero
        for(int k=0; k<column; k++){
            a[x][k] = 0;
        }

        // Set the entire column to zero
        for(int k=0; k<row; k++){
            a[k][y] = 0;
        }
    }

    for(int i=0;i<row; i++){
        for(int j=0; j<column; j++){
            cout<<a[i][j]<<" ";
        }
    }
}