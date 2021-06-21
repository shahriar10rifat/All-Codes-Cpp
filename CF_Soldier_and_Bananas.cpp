#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, sum=0, ans=0;
    cin>>a>>b>>c;

    for(int i=1; i<=c; i++){
        sum+= a*i;
    }
    ans = sum-b;

    if(ans>0) cout<<ans<<endl;
    else cout<<"0"<<endl;


    return 0;
}
