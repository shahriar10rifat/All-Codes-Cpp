///A. Nezzar and Colorful Balls
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t,x,cnt=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>t;
        for(int i=0; i<t; i++){
            cin>>x;
            if(x[i] < x[i+1]){
                cnt++;
            }
        }

    }
    cout<<cnt;
}
