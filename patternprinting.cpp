#include<iostream>
using namespace std;
void pattern1(){
for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
        cout<<"*";
    }
    cout<<endl;
}
}
void pattern2(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern3(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern4(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<i;
        } cout<<endl;
    }
}
void pattern5(){
    for(int i=1; i<=5; i++){
        for(int j=5; j>=i; j--){
            cout<<"* ";
        } cout<<endl;
    }
}
void pattern6(){
    for(int i=5; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<j;
        } cout<<endl;
    }
}
void pattern7(){
    for(int i=0; i<5; i++){
        for(int j=0; j<5-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        for(int j=0; j<5-i-1; j++){
            cout<<" ";
        }
         cout<<endl;
    }
}
void pattern8(){
    for(int i=5; i>0; i--){
        for(int j=0; j<=5-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i-1; j++)
       { cout<<"*";}
        for(int j=0; j<5-i-1; j++){
            cout<<" ";
        }
cout<<endl;
    }
}
void pattern9(){
    pattern7();
    pattern8();
}
void pattern10(){
    for(int i=1; i<=9; i++){
        if(i<=5){
          for(int j=1; j<=i; j++){
            cout<<"*";
          } cout<<endl;
        }
        else if(i>5 && i<=9){
            for(int j=1; j<=10-i; j++){
               cout<<"*";
            }
            cout<<endl;
        }
    }
}
void pattern11(){
for(int i=1; i<=5; i++){
    for(int j=1; j<=i; j++){
        if(i%2!=0){
            if(j%2==0) cout<<"0 ";
            else cout<<"1 ";
        }
        else if(i%2==0){
            if(j%2!=0)
            cout<<"0 ";
            else cout<<"1 ";
        }
        
    }cout<<endl;
}
}
void pattern12(){
    int space=2*3;
for(int i=1; i<=4; i++){
    for(int j=1; j<=i; j++){
        cout<<j;
    }
   for(int j=1; j<=space; j++){
        cout<<" ";
   }
   for(int j=i; j>=1;j--){
    cout<<j;
   }
    cout<<endl;
    space-=2;
}
}
void pattern13(){
   
    for(char i='A'; i<='E'; i++){
        for(char j='A'; j<=i; j++){
cout<<j<<" ";
    }cout<<endl;
}
}
void pattern14(){
    for(char i='E'; i>='A'; i--){
        for(char j='A'; j<=i; j++){
          cout<<j<<" ";
    }cout<<endl;
}
}
void pattern15(){
   
    for(char i='A'; i<='E'; i++){
        for(char j='A'; j<=i; j++){
cout<<i<<" ";
    }cout<<endl;
}
}
void pattern16(){
    for(int i=1; i<=4; i++){
        for(int space=4-i; space>=0; space--){
            cout<<" ";
        }
        char ch='A';
        int breakpt=(2*i/2);
        for(int print=1; print<=(2*i)-1;print++){
            cout<<ch;
            if(print<breakpt) ch++;
            else ch--;
        }
        for(int space=4-i; space>0; space--){
            cout<<" ";
        }
    cout<<endl;
}
}
int main(){
   
// pattern1();
// cout<<endl;
// pattern2();
// cout<<endl;
// pattern3();
// cout<<endl;
// pattern4();
// cout<<endl;
// pattern5();
// cout<<endl;
// pattern6();
// cout<<endl;
// pattern7();
// cout<<endl;
// pattern8();
// cout<<endl;
// pattern9();
// cout<<endl;
// pattern10();
// cout<<endl;
// pattern11();
// cout<<endl;
// pattern12();
// cout<<endl;
// pattern13();
// cout<<endl;
// pattern14();
// cout<<endl;
// pattern15();
pattern16();
}