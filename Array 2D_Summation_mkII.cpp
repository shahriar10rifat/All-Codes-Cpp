#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"enter Row and Column numbers: ";

    int row, col; cin>>row>>col;
    int a[row+7][col+7];
    int b[row+7][col+7];
    int c[row+7][col+7];


    cout<<"Enter value for 1st Array: "<<endl;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            int x; cin>>x;
            a[i][j] = x;
        }
    }
    cout<<"Enter value for 2nd Array: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            int x; cin>>x;
            b[i][j] = x;
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
          c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout<<"The following result is: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
         cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }



return 0;
}



/*
input-
1 2 3       2 3 1
4 5 6   +   4 7 8
7 8 9       11 2 5


output-
3 5 4
8 12 14
18 10 14
*/
