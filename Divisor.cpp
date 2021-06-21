#include <bits/stdc++.h>
using namespace std;
void div(int x){
    for(int i=1; i<sqrt(x); i++){
        if(x%i==0) cout<<i<<" "<<x/i<<endl;
    }
}
int main(){
    int a;cin>>a;
    div(a);
return 0;
}
