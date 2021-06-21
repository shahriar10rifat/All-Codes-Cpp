///A. Nezzar and Colorful Balls
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t, m=INT_MAX, cnt=0, x;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>t;

        for(int j=0; j<t; j++){
            cin>>x;
            if(x <= m){
                x==m;
                cnt++;


            }
            cout<<cnt;
            cnt=0;
        }

    }

}

