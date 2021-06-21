#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, n, n1;
    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>n1;
        while(n1--){
            cin>>a;
            b+=a;
        }
        cout<<"Case "<<i<<": "<<b<<endl;
        b=0;
    }
    return 0;
}
