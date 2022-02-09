#include <bits/stdc++.h>
using namespace std;

bool mark[1007];
void seive (int n){
    mark[0] = mark[1] = 1;

    for(int i=2; i<n; i+=2){
        if(!mark[i]){
            for(int j=i+i; j<=n; j+=i){
                mark[j]=1;
            }
        }
    }
}
int main(){
    cout<<"Enter a Element: ";
    int n; cin>>n;
    seive(n);
    for(int i=1; i<=n; i++){
        if(!mark[i]){
            cout<<"Prime number is :"<<i<<endl;
        }
    }
    return 0;
}

