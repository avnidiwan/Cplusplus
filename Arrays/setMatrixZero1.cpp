//WORKS WHEN THERE IS ONLY ONE ZERO IN THE MATRIX
#include<bits/stdc++.h>
using namespace std;
int main(){

/*
    //bruteforce solution
    int m, n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]==0){
                for(int k=0; k<m; k++){
                    if(arr[k][j]!=0)
                    arr[k][j]=-1;
                    else continue;
                }
                for(int k=0; k<n; k++){
                    if(arr[i][k]!=0)
                    arr[i][k]=-1;
                    else continue;
                }
            }
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]==-1){
                arr[i][j]=0;
            }
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
    }
t.c.-> n^3
    */




/*
    //better solution
    int m, n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    int row[m]={0};
    int column[n]={0};

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]==0){
                column[j]=1;
                row[i]=1;
            }
        }
    }
    for(int x=0; x<m; x++){
        if(row[x]==1){
           for(int j=0; j<n; j++){
                arr[x][j]=0;
           }
        }
    }
    for(int x=0; x<n; x++){
        if(column[x]==1){
            for(int i=0; i<m; i++){
                arr[i][x]=0;
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
    }
    t.c.-> n^2
    s.c.-> O(m)+O(n) using 2 extra array
    */





    int row, column;
   
    cin>>row;
    cin>>column;
     int a[row][column];
    for(int i=0;i<row; i++){
        for(int j=0; j<column; j++){
            cin>>a[i][j];
            
        }
    }
    vector<pair<int, int>> p;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            if(a[i][j]==0){
                p.push_back({i,j});
            }
        }
    }
    for(auto it : p){
        int x = it.first;
        int y = it.second;
        for(int i=0; i<row; i++){
            a[i][y]=0;
        }
        for(int j=0; j<column; j++){
            a[x][j]=0;
        }
    }
 

    for(int i=0;i<row; i++){
        for(int j=0; j<column; j++){
            cout<<a[i][j]<<" ";
        }
    }
}