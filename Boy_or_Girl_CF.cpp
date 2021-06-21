#include <bits/stdc++.h>
using namespace std;
set<char>s;

int main(){
    string x; cin>>x;
    for (int i=0; i<x.size(); i++){
        s.insert(x[i]);
    }
    if(s.size()%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}
