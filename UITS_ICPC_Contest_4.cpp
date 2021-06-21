///.......I
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        int a;
        cin>>a;

        if(a%2 == 0) cout<<"Case "<<i<<": even"<<endl;
        else cout<<"Case "<<i<<": odd"<<endl;
    }
return 0;
}
