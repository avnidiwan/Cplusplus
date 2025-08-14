#include <iostream>
#include <vector>
using namespace std;

int main(){
    int row, col;
    cin>>row>>col;
    int a[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>a[i][j];
        }
    }

    int top=0, left=0, right=col-1, bottom=row-1;

    while(left<=right && top<=bottom){
        for(int i=left; i<=right; i++){
            cout<<a[top][i]<<" ";
        }
        top++;
        for(int i=top; i<=bottom; i++){
            cout<<a[i][right]<<" ";
        }
        right--;
        for(int i=right; i>=left; i--){
            cout<<a[bottom][i]<<" ";
        }
        bottom--;
        for(int i=bottom; i>=top; i--){
            cout<<a[i][left]<<" ";
        }
        left++;
    }
}