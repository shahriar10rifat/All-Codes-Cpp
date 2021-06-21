#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n,sum;
    cin>>m>>n;
    sum = m*n;
    if(sum%2 != 0){
        sum=(sum-1)/2;
        cout<<sum<<endl;
    }
    else{
        cout<<sum/2<<endl;
    }

return 0;
}
