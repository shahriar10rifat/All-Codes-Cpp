#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, cnt=0;
    cin>>n;
    while(n--){
    string s; cin>>s;
    if(s[1] == '+'){
        cnt++;
    }
    else{
        cnt--;
    }
    }
    cout<<cnt<<endl;
    return 0;
}
