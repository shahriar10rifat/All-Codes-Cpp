///........C - C...

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<char>v;
    string s;
    cin>>s;

    for(int i=0; i<s.size(); i++){
        if(s[i]!='+')
            v.push_back(s[i]);
    }
    sort(v.begin(), v.end());
        cout<<v[0];
    for(int i=1; i<v.size(); i++){
        cout<<"+"<<v[i];
    }
    return 0;
}
/*
    3+2+1
    1+1+3+1+3
    2

    1+2+3
    1+1+1+3+3
    2
*/

