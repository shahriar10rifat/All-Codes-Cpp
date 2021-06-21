/// Solution-A: Add and Divide

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, cnt=1;
    cin>>n;
    for(int i=0; i<n; i++){
        cnt =1;
        cin>>a>>b;
        if(a / b){
            cnt++;
        }
        else if(a / (b+1)){
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
