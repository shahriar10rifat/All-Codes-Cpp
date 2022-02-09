#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5][3];

    int row=5, col=3;  //taking input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            int x; cin>>x;
            a[i][j]=x;
        }

    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


return 0;
}


/*
input-
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

output-
1 2 3
4 5 6
7 8 9
10 11 12
13 14 15
*/

