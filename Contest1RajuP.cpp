#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i,j,n,temp,sum=0;
    cin>>n;
    for(i=1; i<=n; i++){
    cin>>a>>b;
    for(j=a; j<=b; j++){
        if(j%2!=0)
            sum+=j;
    }
     cout<<"Case "<<i<<": "<<sum<<endl;
    sum=0;

    }

return 0;
}
