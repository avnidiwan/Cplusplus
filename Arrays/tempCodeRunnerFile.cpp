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